create table  if not exists employee(
	Eno char(4) not null,
	Ename varchar(50) not null,
	Job_Type varchar(50) not null,
	Manager char(10),
	Hire_Date date not null,
	Dno integer,
	Commission decimal(10,2),
	Salary decimal(7,2),

	Primary key(Eno)
);

create table  if not exists department(
	Dno integer not null,
	Dname varchar(50) ,
	Location varchar(50),

	primary key(Dno)
);

insert into employee 
values 
	('8812','tom','Manager','yes','1980-05-01',10,2900.50,2990.50),
	('7795','jerry','Clerk','no','1988-05-01',10,null,2200.50),
	('7790','oggy','CA','no','1980-05-11',20,3000.50,3000.50),
	('7900','jack','Manager','yes','1982-05-01',30,null,1400.50),
	('7709','spike','Security','no','1982-05-01',20,3500.75,3500.75),
	('7756','bob','Security','no','1980-06-01',10,3500.75,2000.25),
	('8890','bean','Security','no','1982-09-01',10,2000.25,2500.25),
	('8876','Shaun','Clerk','no','1981-09-01',20,4000.25,2100.25),
	('7768','timmy','Clerk','no','1980-09-01',40,3800.25,1900.25),
	('7788','blake','CA','no','1980-05-01',40,null,3600.50),
	('7799','moana','Clerk','no','1982-06-30',30,null,3600.99),
	('7703','rock','Clerk','no','1985-05-29',30,1700.50,1500.50),
	('7723','joker','Clerk','no','1988-05-01',20,null,3350.50),
	('7714','robert','Clerk','no','1980-05-01',40,1900.50,2999.50),
	('8815','king','Manager','no','1980-05-01',20,null,2190.50);

-- alter department add constraint fk_dno foreign key(Dno) references employee(Dno);
insert into department
values
	(10,'IT','Delhi'),
	(20,'HR','Kolkata'),
	(30,'Finance','London'),
	(40,'Sales','Dallas');

--select * from employee;
--select * from department;

--quries....
--1. Query to display Employee Name, Job, Hire Date, Employee Number; for each employee with the Employee Number appearing first.
select Eno,Ename, Job_Type, Hire_Date  from employee;

--2. Query to display unique Jobs from the Employee Table.
select distinct Job_Type from employee;

--3. Query to display the Employee Name concatenated by a Job separated by a comma.
select Ename||'__,__'||Job_Type from employee;
select concat(Ename,'__', Job_Type) fuckoff from employee;
--pipe is the concat in sqlite.. no concat() func exist here..
--we can also use || on mysql by.. set sql_mode to PIPES_AS_CONCAT..

--4. Query to display all the data from the Employee Table. Separate each Column by a comma and name the said column as THE_OUTPUT.
select ('--'||Eno||','|| Ename||','|| Job_Type||','|| Manager||','|| Hire_date||','|| Dno||','|| Commission||','|| Salary) from employee as 'THE_OUTPUT';

--5. Query to display employee name & salary of all the employes earning>2850
select Ename, Salary from employee where Salary>28500;

--6. Query to display employee name & department no for the employee no =7900
select Ename, Dno from employee where Eno='E12';

--7. Query to display employee name and salary for all employees whosesalary is not in the range of 1500-28000
select Ename, Salary from employee where Salary not between 15000 and 28000;

--8. Query to display employee name & department no of all the employees who are in the department no =10 and 30 in the alphabetical order by name.
select Ename, Dno from employee where Dno in (10,30) order by Ename;

--9. Query to display name and hire date of every employee who has hired in 2004
select Ename, Hire_Date from employee where Hire_Date like '1981%';

--10. Query to display name,job of all employees who don't have a current manager
select Ename, Job_Type from employee where Manager='no';

select * from employee where dno in (select dno from employee except (select dno from employee where manager="yes"));

--11. Query to display name,salary,commision for all the employees who earn commissions
select Ename, Salary, Commission from employee where Commission is not null;

--12. Query to sort data in descending order of salary and commission
select * from employee order by Salary, Commission desc;

--13 Query to display name of all employees where the third letter of their name is 'a'
select Ename from employee where Ename like '__a%';

--14. Query to display name of all employees either have two 'r' or have two 'a' in their name and either in dept no =10 or their employee no =E14
select Ename from employee where Ename like '%r%r%' or Ename like '%a%a%' or Eno='7788' or Dno=10 ;

--15. Query to display name salary & commission for all whose commission is grater than theri salary increased by 5%
select Ename, Salary, Commission from employee where Commission>Salary*1.05;

--16. Query to display the current date
select current_date;
--Query to display the current date and time	
-- select current_timestamp();

--17. Query to display name,hier date & salary review date which is 1st monday after six months of employeement
select Ename, Hire_Date, (Hire_Date, INTERVAL 6 MONTH) as Review_Date from employee;
select Ename, Hire_Date, add_months(Hire_date,6) as Salary_Review_Date from employee;
select Ename,Hire_Date, dayname(TIMESTAMPADD(MONTH, 6, hire_date)) from employee;								

--18. Query to display name, and calculate the number of months between today and hiering date
select Ename, (current_date - Hire_Date) as Months from employee; --not work in mysql
select *, timestampdiff(MONTH,Hire_Date,current_date) as Months from employee;

--19. Query to display the following for each employee <E-Name> earns < Salary> monthly but wants < 3 * Current Salary >. Label the Column as Dream Salary.													
select Ename, Salary, (Salary*3) as Dream_Salary from employee;
select concat(Ename," earns ", Salary," monthly but wants ", (Salary*3)) as Dream_Salary from employee;

--20. Query to display Name with the 1st letter capitalized and all other letter lower case and length of their name of all the employees whose name starts with  ̳J„, „A„ and  ̳M„.
select upper(Ename) as Name from employee where Ename like 'J%' or Ename like 'A%' or ename like 'M%';
select upper(Ename),length(ename) from employee where Ename like 'J%' or 'A%' or 'M%'; --//not work... only J comes..

--21. Query to display Name, Hire Date and Day of the week on which the employee started.
select Ename, Hire_Date, dayofweek(Hire_Date) from employee;

--22. Query to display Name, Department Name and Department No for all the employees.
select Ename, Dname, Dno from employee, department;

--23. Query to display Unique Listing of all Jobs that are in Department # 30.
select distinct Job_Type from employee where Dno=30;

--24. Query to display Name, Dept Name of all employees who have an  ̳A„ in their name.
select Ename, Dname from employee, department where Ename like '%A%' and Dno=10;

--25. Query to display Name, Job, Department No. And Department Name for all the employees working at the Dallas location.
select Ename, Job_Type, Dno, Dname from employee, department where Dno=10 and Location="Dallas";

--26. Query to display Name and Employee no. Along with their Manger„s Name and the Manager„s employee no; along with the Employees„ Name who do not have a Manager.
select Ename, Manager, Eno from employee where Manager is not null;

--27. Query to display Name, Dept No. And Salary of any employee whose department No. and salary matches both the department no. And the salary of any employee who earns a commission.
select Ename, Dno, Salary from employee where Dno=10 and Salary=Commission;

--28. Query to display Name and Salaries represented by asterisks, where each asterisk (*) signifies $100.
select Ename, '*' from employee where Salary=100;

--29. Query to display the Highest, Lowest, Sum and Average Salaries of all the employees.
select max(Salary), min(Salary), sum(Salary), avg(Salary) from employee;

--30. Query to display the number of employees performing the same Job type functions.
select count(Job_Type) from employee;

--31. Query to display the no. of managers without listing their names.
select count(Manager) from employee where Manager='yes' and manager is not null;

--32. Query to display the Department Name, Location Name, No. of Employees and the average salary for all employees in that department.
select Dname, Location, count(Ename), avg(Salary) from employee, department where Dno=10;

--33. Query to display Name and Hire Date for all employees in the same dept. as Blake.
select Ename, Hire_Date from employee where Dno=10 and Ename='Blake';


--34. Query to display the Employee No. And Name for all employees who earn more than the average salary.
select Eno, Ename from employee where Salary>avg(Salary); --wrong
--select eno,ename,salary from employee group by ename having salary>avg(salary); --also cant do that..
select Eno, Ename from employee where Salary > (select avg(Salary) from employee);

--35. Query to display Employee Number and Name for all employees who work in a department with any employee whose name contains a  ̳T„.
select Eno, Ename from employee where Dno=10 and Ename like '%T%';
select eno,ename from employee where any (select ename from employee where ename like '%t%');

--36. Query to display the names and salaries of all employees who report to King.
select * from employee where dno = (select dno from employee where ename="tom"); --ename="king"
select * from employee where dno = (select dno from employee where ename="jack" and manager="yes");

--37. Query to display the department no, name and job for all employees in the Sales department.
select Dno, Dname, Job_Type from employee where Dno=10;

