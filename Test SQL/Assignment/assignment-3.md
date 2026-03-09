

|***1. Write a SQL statement to insert a record as follows:,2. Write a SQL statement to insert 3 rows by a single insert statement.***|
|-|

ANS:



&nbsp; INSERT INTO employees VALUES

&nbsp;   -> (100,'Steven','King','SKING','515.123.4567','1987-06-17','AD\_PRES',24000,0,200,10),

&nbsp;   -> (101,'Neena','Kochhar','NKOCHHAR','515.123.4568','1987-06-18','AD\_VP',17000,0,200,10),

&nbsp;   -> (102,'Lex','De Haan','LDEHAAN','515.123.4569','1987-06-19','AD\_VP',17000,0,200,10),

&nbsp;   -> (103,'Alexander','Hunold','AHUNOLD','590.423.4567','1987-06-20','IT\_PROG',9000,0,103,60),

&nbsp;   -> (104,'Bruce','Ernst','BERNST','590.423.4568','1987-06-21','IT\_PROG',6000,0,103,60),

&nbsp;   -> (105,'David','Austin','DAUSTIN','590.423.4569','1987-06-22','IT\_PROG',4800,0,103,60),

&nbsp;   -> (106,'Valli','Pataballa','VPATABAL','590.423.4560','1987-06-23','IT\_PROG',4800,0,103,60),

&nbsp;   -> (107,'Diana','Lorentz','DLORENTZ','590.423.5567','1987-06-24','IT\_PROG',4200,0,114,30),

&nbsp;   -> (108,'Nancy','Greenberg','NGREENBE','515.124.4569','1987-06-25','SA\_MAN',12000,0,145,80),

&nbsp;   -> (109,'Daniel','Faviet','DFAVIET','515.124.4169','1987-06-26','SA\_MAN',9000,0,145,80);



&nbsp; 

&nbsp; INSERT INTO jobs (job\_id, job\_title, min\_salary, max\_salary)

&nbsp;   -> VALUES

&nbsp;   -> ('AD\_VP', 'Administration Vice President', 15000, 30000),

&nbsp;   -> ('AD\_ASST', 'Administration Assistant', 3000, 6000),

&nbsp;   -> ('FI\_MGR', 'Finance Manager', 8200, 16000),

&nbsp;   -> ('FI\_ACCOUNT', 'Accountant', 4200, 9000),

&nbsp;   -> ('AC\_MGR', 'Accounting Manager', 8200, 16000),

&nbsp;   -> ('AC\_ACCOUNT', 'Public Accountant', 4200, 9000),

&nbsp;   -> ('SA\_MAN', 'Sales Manager', 10000, 20000);



&nbsp; mysql> table employee;

+-------------+------------+-----------+----------+--------------+------------+----------+------------+------------+---------------+

| employee\_id | first\_name | last\_name | email    | phone\_number | hire\_date  | salary   | commission | manager\_id | department\_id |

+-------------+------------+-----------+----------+--------------+------------+----------+------------+------------+---------------+

|         100 | Steven     | King      | SKING    | 515.123.4567 | 1987-06-17 | 24000.10 |       0.00 |        200 |            10 |

|         101 | Neena      | Kochhar   | NKOCHHAR | 515.123.4568 | 1987-06-18 | 17000.10 |       0.00 |        200 |            10 |

|         102 | Lex        | De Haan   | LDEHAAN  | 515.123.4569 | 1987-06-19 | 17000.10 |       0.00 |        200 |            10 |

|         103 | Alexander  | Hunold    | AHUNOLD  | 590.423.4567 | 1987-06-20 |  9000.10 |       0.00 |        103 |            60 |

|         104 | Bruce      | Ernst     | BERNST   | 590.423.4568 | 1987-06-21 |  6000.10 |       0.00 |        103 |            60 |

|         105 | David      | Austin    | DAUSTIN  | 590.423.4569 | 1987-06-22 |  4800.10 |       0.00 |        103 |            60 |

|         106 | Valli      | Pataballa | VPATABAL | 590.423.4560 | 1987-06-23 |  4800.10 |       0.00 |        103 |            60 |

|         107 | Diana      | Lorentz   | DLORENTZ | 590.423.5567 | 1987-06-24 |  4200.10 |       0.00 |        114 |            30 |

|         108 | Nancy      | Greenberg | NGREENBE | 515.124.4569 | 1987-06-25 | 12000.10 |       0.00 |        145 |            80 |

|         109 | Daniel     | Faviet    | DFAVIET  | 515.124.4169 | 1987-06-26 |  9000.10 |       0.00 |        145 |            80 |







|***3. Write a SQL statement to insert one row in jobs table to ensure that no duplicate value will be entered in the job\_id column.***|
|-|



mysql> INSERT INTO jobs (job\_id, job\_title, min\_salary, max\_salary)

&nbsp;   -> VALUES

&nbsp;   -> ('AD\_VP', 'Administration Vice President', 15000, 30000),

&nbsp;   -> ('AD\_ASST', 'Administration Assistant', 3000, 6000),

&nbsp;   -> ('FI\_MGR', 'Finance Manager', 8200, 16000),

&nbsp;   -> ('FI\_ACCOUNT', 'Accountant', 4200, 9000),

&nbsp;   -> ('AC\_MGR', 'Accounting Manager', 8200, 16000),

&nbsp;   -> ('AC\_ACCOUNT', 'Public Accountant', 4200, 9000),

&nbsp;   -> ('SA\_MAN', 'Sales Manager', 10000, 20000);

mysql> table jobs;

+------------+-------------------------------+------------+------------+

| job\_id     | job\_title                     | min\_salary | max\_salary |

+------------+-------------------------------+------------+------------+

| AC\_ACCOUNT | Public Accountant             |       4200 |       9000 |

| AC\_MGR     | Accounting Manager            |       8200 |      16000 |

| AD\_ASST    | Administration Assistant      |       3000 |       6000 |

| AD\_PRES    | President                     |      20000 |      40000 |

| AD\_VP      | Administration Vice President |      15000 |      30000 |

| FI\_ACCOUNT | Accountant                    |       4200 |       9000 |

| FI\_MGR     | Finance Manager               |       8200 |      16000 |

| SA\_MAN     | Sales Manager                 |      10000 |      20000 |

+------------+-------------------------------+------------+------------+

8 rows in set (0.018 sec)





|***4.Write SQL statement to increment salary of each emp by 10%.***|
|-|



mysql> UPDATE employee

&nbsp;   -> SET salary = salary \* 1.10;

Query OK, 10 rows affected (0.054 sec)

Rows matched: 10  Changed: 10  Warnings: 0



mysql> table employee;

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

| employee\_id | first\_name | last\_name | email         | phone\_number | hire\_date  | salary   | commission | manager\_id | department\_id |

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

|         100 | Steven     | King      | not available | 515.123.4567 | 1987-06-17 | 26400.11 |       0.10 |        200 |            10 |

|         101 | Neena      | Kochhar   | not available | 515.123.4568 | 1987-06-18 | 18700.11 |       0.10 |        200 |            10 |

|         102 | Lex        | De Haan   | not available | 515.123.4569 | 1987-06-19 | 18700.11 |       0.10 |        200 |            10 |

|         103 | Alexander  | Hunold    | not available | 590.423.4567 | 1987-06-20 |  9900.11 |       0.10 |        103 |            60 |

|         104 | Bruce      | Ernst     | not available | 590.423.4568 | 1987-06-21 |  6600.11 |       0.10 |        103 |            60 |

|         105 | David      | Austin    | not available | 590.423.4569 | 1987-06-22 |  5280.11 |       0.10 |        103 |            60 |

|         106 | Valli      | Pataballa | not available | 590.423.4560 | 1987-06-23 |  5280.11 |       0.10 |        103 |            60 |

|         107 | Diana      | Lorentz   | not available | 590.423.5567 | 1987-06-24 |  4620.11 |       0.10 |        114 |            30 |

|         108 | Nancy      | Greenberg | not available | 515.124.4569 | 1987-06-25 | 13200.11 |       0.10 |        145 |            80 |

|         109 | Daniel     | Faviet    | not available | 515.124.4169 | 1987-06-26 |  9900.11 |       0.10 |        145 |            80 |

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+   





|***5. Write a SQL statement to change the email column of employees table with 'not***<br />***available' for those employees whose department\_id is 80 and gets a***<br />***commission is less than .20%***|
|-|



mysql> update employee set email='not

&nbsp;   '> available'

&nbsp;   -> where department\_id=80 and commission<0.2;

Query OK, 2 rows affected (0.059 sec)

Rows matched: 2  Changed: 2  Warnings: 0



mysql> table employee;

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

| employee\_id | first\_name | last\_name | email         | phone\_number | hire\_date  | salary   | commission | manager\_id | department\_id |

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

|         100 | Steven     | King      | SKING         | 515.123.4567 | 1987-06-17 | 24000.10 |       0.00 |        200 |            10 |

|         101 | Neena      | Kochhar   | NKOCHHAR      | 515.123.4568 | 1987-06-18 | 17000.10 |       0.00 |        200 |            10 |

|         102 | Lex        | De Haan   | LDEHAAN       | 515.123.4569 | 1987-06-19 | 17000.10 |       0.00 |        200 |            10 |

|         103 | Alexander  | Hunold    | AHUNOLD       | 590.423.4567 | 1987-06-20 |  9000.10 |       0.00 |        103 |            60 |

|         104 | Bruce      | Ernst     | BERNST        | 590.423.4568 | 1987-06-21 |  6000.10 |       0.00 |        103 |            60 |

|         105 | David      | Austin    | DAUSTIN       | 590.423.4569 | 1987-06-22 |  4800.10 |       0.00 |        103 |            60 |

|         106 | Valli      | Pataballa | VPATABAL      | 590.423.4560 | 1987-06-23 |  4800.10 |       0.00 |        103 |            60 |

|         107 | Diana      | Lorentz   | DLORENTZ      | 590.423.5567 | 1987-06-24 |  4200.10 |       0.00 |        114 |            30 |

|         108 | Nancy      | Greenberg | not

available | 515.124.4569 | 1987-06-25 | 12000.10 |       0.00 |        145 |            80 |

|         109 | Daniel     | Faviet    | not

available | 515.124.4169 | 1987-06-26 |  9000.10 |       0.00 |        145 |            80 |

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

10 rows in set (0.008 sec)







|***6. Write a SQL statement to change the email column of employees table with 'not***<br />***available' for those employees who belongs to the 'Purchasing' department.***|
|-|



mysql> UPDATE employee e

&nbsp;   -> JOIN departments d

&nbsp;   -> SET e.email = 'not available'

&nbsp;   -> WHERE d.department\_name = 'Purchasing';

Query OK, 10 rows affected (0.069 sec)

Rows matched: 10  Changed: 10  Warnings: 0



|***7. Write a SQL statement to change the email and commission\_pct column of***<br />***employees table with 'not available' and 0.10 for all employees.***|
|-|

mysql> UPDATE employee set email = 'not available',commission=0.10;

Query OK, 10 rows affected (0.047 sec)

Rows matched: 10  Changed: 10  Warnings: 0



mysql> table employee;

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

| employee\_id | first\_name | last\_name | email         | phone\_number | hire\_date  | salary   | commission | manager\_id | department\_id |

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

|         100 | Steven     | King      | not available | 515.123.4567 | 1987-06-17 | 24000.10 |       0.10 |        200 |            10 |

|         101 | Neena      | Kochhar   | not available | 515.123.4568 | 1987-06-18 | 17000.10 |       0.10 |        200 |            10 |

|         102 | Lex        | De Haan   | not available | 515.123.4569 | 1987-06-19 | 17000.10 |       0.10 |        200 |            10 |

|         103 | Alexander  | Hunold    | not available | 590.423.4567 | 1987-06-20 |  9000.10 |       0.10 |        103 |            60 |

|         104 | Bruce      | Ernst     | not available | 590.423.4568 | 1987-06-21 |  6000.10 |       0.10 |        103 |            60 |

|         105 | David      | Austin    | not available | 590.423.4569 | 1987-06-22 |  4800.10 |       0.10 |        103 |            60 |

|         106 | Valli      | Pataballa | not available | 590.423.4560 | 1987-06-23 |  4800.10 |       0.10 |        103 |            60 |

|         107 | Diana      | Lorentz   | not available | 590.423.5567 | 1987-06-24 |  4200.10 |       0.10 |        114 |            30 |

|         108 | Nancy      | Greenberg | not available | 515.124.4569 | 1987-06-25 | 12000.10 |       0.10 |        145 |            80 |

|         109 | Daniel     | Faviet    | not available | 515.124.4169 | 1987-06-26 |  9000.10 |       0.10 |        145 |            80 |

+-------------+------------+-----------+---------------+--------------+------------+----------+------------+------------+---------------+

