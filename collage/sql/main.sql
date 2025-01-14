create table if not exists users(
	id integer primary key,
	name text not null, 
	email text not null,
	password text not null
);

insert into users(id,name, email, password) values(
	1,'John Doe', 'ejeyd@example.com', 'password'),
	(2,'Jane Doe', 'ztejd@example.com', 'password'),
	(3,'Jimy Doe', 'rdlnk@example.com', 'password'),
	(4,'Jill Doe', 'ztejd@example.com', 'password'),
	(55,'Jack Doe', 'tzirw@example.com', 'password'),
	(7,'Jill Doe', 'ztejd@example.com', 'password'),
	(557,'Jack Doe', 'tzirw@example.com', 'password')
	
	;
-- insert into users
-- values
-- 	( 'abck Doe', 'tzirw@example.com', 'password'))

select * from users;