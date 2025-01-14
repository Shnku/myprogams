create table users(
	id integer primary key,
	name text not null,
	email text not null,
	password text not null
);
insert into users
values
	( 1,'John Doe', 'ejeyd@example.com', 'password');
select * from users;


