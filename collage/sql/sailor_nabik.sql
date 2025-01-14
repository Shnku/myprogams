create table sailor(
	sid integer,
	sname text not null,
	rating integer,
	age integer,
	primary key(sid)
);

create table reserves(
	sid integer ,
	bid integer,
	day date,
	foreign key(sid) references sailor(sid)
);

create table boat(
	bid integer primary key references reserves(bid),
	bname text not null,
	color text not null
);

insert into sailor
values
	(22, 'Dustin', 7, 45),
	(29, 'Brutus', 1, 33),
	(31, 'Lubber', 8, 55),
	(32, 'Andy', 8, 26),
	(58, 'Rusty', 10, 35),
	(64, 'Horatio', 7, 35),
	(71, 'Zorba', 10, 16),
	(74, 'Horatio', 9, 35),
	(85, 'Art', 10, 35),
	(88, 'Bob', 8, 62);

insert into reserves
values
	(22, 101, '2018-08-01'),
	(22, 102, '2018-08-01'),
	(22, 103, '2018-08-01'),
	(22, 104, '2018-08-01'),
	(31, 102, '2018-08-01'),
	(31, 103, '2018-08-01'),
	(31, 104, '2018-08-01'),
	(64, 101, '2018-08-01'),
	(64, 102, '2018-08-01'),
	(74, 103, '2018-08-01');

insert into boat
values
	(101, 'Interlake', 'blue'),
	(102, 'Interlake', 'red'),
	(103, 'Clipper', 'green'),
	(104, 'Marine', 'red');

select * from sailor,reserves where sailor.sid=reserves.sid;
select * from boat;
select * from sailor natural join reserves;