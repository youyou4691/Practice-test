TEST-TABLE

create table questionset (
  id int primary key  not null,
  name text, 
  date timestamp
);


create table question (
  quesid int references questionset(id)  not null,
  container text, 
  date timestamp
);


create table option(
  id int primary key  not null,
  quid int references questionset(id)  not null,
  showname text, 
  showorder int
);


create table answerset(
  id int primary key  not null,
  quesid int references questionset(id)  not null,
  stime timestamp,
  otime timestamp,
  dtime timestamp
);


create table answer(
  id int primary key  not null,
  ansid int not null,
  quid int not null,
  auans boolean,
  ansopid int,
  dtime timestamp
);
