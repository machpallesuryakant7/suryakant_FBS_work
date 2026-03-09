Assignment-1





Q.Login to MySQL and view all databases already present. You should get

following result :



Ans:

mysql> show databases;

+--------------------+

| Database           |

+--------------------+

| firstbit\_sql       |

| information\_schema |

| mysql              |

| oct\_dec\_hybrid     |

| performance\_schema |

| sys                |

+--------------------+

6 rows in set (0.058 sec)





Q.2 Write an SQL statement to create a simple table countries including columns

country\_id,country\_name and region\_id. After this display the structure of

table as below :





Ans:

mysql> desc countries;

+--------------+-------------+------+-----+---------+-------+

| Field        | Type        | Null | Key | Default | Extra |

+--------------+-------------+------+-----+---------+-------+

| country\_id   | int         | YES  |     | NULL    |       |

| country\_name | varchar(20) | YES  |     | NULL    |       |

| region\_id    | int         | YES  |     | NULL    |       |

+--------------+-------------+------+-----+---------+-------+

3 rows in set (0.062 sec)





Q.3. Write an SQL statement to create a table named jobs including columns

job\_id, job\_title, min\_salary, max\_salary and check whether the

max\_salary amount exceeding the upper limit 25000. Also set job\_id as

primary key and entering null values for job\_title is not allowed.



Ans:

mysql> desc jobs;

+------------+--------------+------+-----+---------+-------+

| Field      | Type         | Null | Key | Default | Extra |

+------------+--------------+------+-----+---------+-------+

| job\_id     | int          | NO   | PRI | NULL    |       |

| job\_title  | varchar(20)  | NO   |     | NULL    |       |

| min\_salary | decimal(7,2) | YES  |     | NULL    |       |

| max\_salary | decimal(7,2) | YES  |     | NULL    |       |

+------------+--------------+------+-----+---------+-------+

4 rows in set (0.032 sec)





Q.4 Write a SQL statement to create a table named job\_histry including columns

employee\_id, start\_date, end\_date, job\_id and department\_id



Ans:

mysql> create table job\_histry(

    -> employee\_id int,

    -> start\_date date,

    -> end\_date date,

    -> job\_id int,

    -> department\_id int);

Query OK, 0 rows affected (0.326 sec)



mysql> desc job\_histry;

+---------------+------+------+-----+---------+-------+

| Field         | Type | Null | Key | Default | Extra |

+---------------+------+------+-----+---------+-------+

| employee\_id   | int  | YES  |     | NULL    |       |

| start\_date    | date | YES  |     | NULL    |       |

| end\_date      | date | YES  |     | NULL    |       |

| job\_id        | int  | YES  |     | NULL    |       |

| department\_id | int  | YES  |     | NULL    |       |

+---------------+------+------+-----+---------+-------+

5 rows in set (0.056 sec)





Q.5 Write an SQL statement to alter a table named countries to make sure that no

duplicate data against column country\_id will be allowed at the time of

insertion.



Ans:

mysql> alter table countries

    -> add primary key (country\_id);

Query OK, 0 rows affected (0.748 sec)

Records: 0  Duplicates: 0  Warnings: 0



mysql> desc countries;

+--------------+-------------+------+-----+---------+-------+

| Field        | Type        | Null | Key | Default | Extra |

+--------------+-------------+------+-----+---------+-------+

| country\_id   | int         | NO   | PRI | NULL    |       |

| country\_name | varchar(20) | YES  |     | NULL    |       |

| region\_id    | int         | YES  |     | NULL    |       |

+--------------+-------------+------+-----+---------+-------+

3 rows in set (0.044 sec)





Q.6 Write an SQL statement to create a table named jobs including columns job\_id,

job\_title, min\_salary and max\_salary, and make sure that, the default value

for job\_title is blank and min\_salary is 8000 and max\_salary is NULL will be

entered automatically at the time of insertion if no value assigned for the

specified columns.



Ans:

mysql> alter table jobs

    -> modify max\_salary int default null,

    -> modify job\_title varchar(20) default ' ';

    -> modify min\_salary int default 8000;





mysql> desc jobs;

+------------+-------------+------+-----+---------+-------+

| Field      | Type        | Null | Key | Default | Extra |

+------------+-------------+------+-----+---------+-------+

| job\_id     | int         | NO   | PRI | NULL    |       |

| job\_title  | varchar(20) | YES  |     |         |       |

| min\_salary | int         | YES  |     | 8000    |       |

| max\_salary | int         | YES  |     | NULL    |       |

+------------+-------------+------+-----+---------+-------+

4 rows in set (0.055 sec)



Q.7 Create a Department table with following structure





Ans:

create table departments(

    -> department\_id decimal(4,0) not null,

    -> department\_name decimal(4,0) not null,

    -> manager\_id decimal(4,0) not null,

    -> location\_id decimal(6,0));



step 2:mysql> alter table departments

    -> add primary key(department\_id, manager\_id);    //composite key



mysql> desc departments;

+-----------------+--------------+------+-----+---------+-------+

| Field           | Type         | Null | Key | Default | Extra |

+-----------------+--------------+------+-----+---------+-------+

| department\_id   | decimal(4,0) | NO   | PRI | NULL    |       |

| department\_name | varchar(30)  | NO   |     | NULL    |       |

| manager\_id      | decimal(4,0) | NO   | PRI | NULL    |       |

| location\_id     | decimal(6,0) | YES  |     | NULL    |       |

+-----------------+--------------+------+-----+---------+-------+

4 rows in set (0.046 sec)



Q.8



mysql> show create table employee;

+----------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

| Table    | Create Table                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |

+----------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

| employee | CREATE TABLE `employee` (

&nbsp; `employee\_id` int NOT NULL,

&nbsp; `first\_name` varchar(20) DEFAULT NULL,

&nbsp; `last\_name` varchar(20) DEFAULT NULL,

&nbsp; `email` varchar(30) DEFAULT NULL,

&nbsp; `phone\_number` varchar(13) DEFAULT NULL,

&nbsp; `hire\_date` date DEFAULT NULL,

&nbsp; `salary` decimal(10,2) DEFAULT NULL,

&nbsp; `commission` decimal(10,2) DEFAULT NULL,

&nbsp; `manager\_id` int DEFAULT NULL,

&nbsp; `department\_id` int DEFAULT NULL,

&nbsp; PRIMARY KEY (`employee\_id`),

&nbsp; KEY `department\_id` (`department\_id`,`manager\_id`),

&nbsp; CONSTRAINT `employee\_ibfk\_1` FOREIGN KEY (`department\_id`, `manager\_id`) REFERENCES `departments` (`department\_id`, `manager\_id`)

) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4\_0900\_ai\_ci |

+----------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

1 row in set (0.095 sec)



mysql>



