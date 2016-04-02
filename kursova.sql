create database db_sample_myCoursework;
use db_sample_myCoursework;

create table Professors
(
id int not null primary key auto_increment,
professorsNames varchar(30)
);
create table Subjects
(
id int not null primary key auto_increment,
subjectName varchar(40) not null,
dateOfCreation date not null
);
create table link_subjectsProfessors
(
subject_id int not null,
professors_id int not null,
constraint foreign key (subject_id) references subjects(id),
constraint foreign key (professors_id) references professors(id),
primary key (subject_id,professors_id) 
);
create table Students
(
id int not null primary key auto_increment,
studentName varchar(30) not null,
facultyNumber bigint not null,
studentGroup tinyint unsigned not null,
studentCourse tinyint unsigned not null
);
create table students_Subjects
(
students_id int not null,
subjects_id int not null,
constraint foreign key (students_id) references students(id),
constraint foreign key (subjects_id) references subjects(id),
primary key (students_id,subjects_id)
);
create table SessionInformation
(
id int not null primary key auto_increment,
disciplineName varchar(40) not null,
dateOfTest datetime not null,
sesionType enum('Winter','Summer') not null,
avarageGradeOfStudents double default 0
);
create table students_Session
(
students_id int not null,
sessionInformation_id int not null,
constraint foreign key (students_id) references students(id),
constraint foreign key (sessionInformation_id) references sessionInformation(id),
primary key(students_id,sessionInformation_id)
);
insert into Professors(professorsNames) values('Iliqn Ivanov'),('Stefan Petrov'),('Stilqn Aleksandrov');
insert into students(studentName,facultyNumber,studentGroup,studentCourse) values ('Georgi Ivanov Todorov','501214001','48','2'),('Iliqn Todorov Georgiev','501214002','45','3'),('Elena Petrova Petrova','501214003','38','2'),('Ivan Iliev Iliev', '501214005','47','2');
insert into SessionInformation(disciplineName,dateOfTest,sesionType,avarageGradeOfStudents) values('Matematika 3','2016-12-03 12:30:00','Winter','25'),('PIK 3','2016-12-07 15:30:00','Winter','120'),('Himiq','2016-12-01 09:30:00','Winter','24.5098'),('Fizika 2','2015-12-01 09:30:00','Summer','94.5098'),('PPE','2016-12-022 09:30:00','Summer','84.5098');
insert into subjects(subjectName,dateOfCreation) values('Matematika 3','2000-03-12'),('Fizika','2000-03-11'),('MySql','2000-05-07');
insert into link_subjectsprofessors(subject_id,professors_id) values(1,1),(1,2),(2,3);
insert into students_subjects(students_id,subjects_id) values (1,1),(2,2),(3,3),(4,1),(1,2),(1,3);
insert into students_session(students_id,sessionInformation_id) values(1,1),(2,1),(3,2),(4,3),(1,2);

select studentName
from students
where id>1 and id<4 and studentGroup>38;

select MAX(avarageGradeOfStudents) as 'The best grades of all subjects in the different semesters'
from sessionInformation
group by sesionType;

select professors.professorsNames as 'Professors Names',subjects.subjectName as 'Name of subject'
from professors join link_subjectsprofessors
on professors.id=link_subjectsprofessors.professors_id
join subjects
on link_subjectsprofessors.subject_id=subjects.id;

select professors.professorsNames as 'Professors Names',subjects.subjectName as 'Name of subject'
from professors join link_subjectsprofessors
on professors.id=link_subjectsprofessors.professors_id
right outer join subjects
on link_subjectsprofessors.subject_id=subjects.id;

select sessioninformation.disciplineName as 'Subject Name', Count(students_session.students_id) as 'Number of students for this test'
from students join students_session
on students.id=students_session.students_id
join sessioninformation
on students_session.sessionInformation_id=sessioninformation.id
group by sessioninformation.disciplineName;

CALL CountSomething('Georgi Ivanov Todorov');

