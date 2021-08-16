# Siemens test

Answers to coding test for the role of Software Engineer at Siemens.

All answers were developed in C or SQL. For questions with code in C language, both the code and output files were provided. In order to generate and run the `.out` file from terminal, follow the steps below.

```bash
$ gcc question.c -o question.out
$ ./question.out
```

## Comments on questions 3 and 4

The function `ConcatRemove` is located in file `question_3.c` and its unit tests in `question_4.c`. The unit tests were developed using the `check` framework, so in order to correctly run them, user must install it running the following command:

```bash
$ sudo apt-get install check
```

Afterwards, the user can test the code created by executing the Makefile via the following command:

```bash
$ make
```

## Comments on questions 5 and 7

The `question_5.sql` contains instructions on how to create and populate the tables as well as selecting the desired data. The solution for question 7, on the other hand, only displays how to query the data, since the process of creating and filling the tables is similar.

## Questions

Question headers.

### Question 2

Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

For each multiple of 3, print "Foo" instead of the number.
For each multiple of 5, print "Baa" instead of the number.
For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

Your solution should be using as few lines of code as possible, but you should produce efficient code.

### Question 3

Consider a string containing lowercase characters from the Portuguese alphabet. You can perform two types of operations on this string:
1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
1. Remove the last character from the string. If the string is empty, it will remain empty.

Given an integer k and two strings s and t, determine if you can convert s to t using exactly k operations described above on s. If possible, the program prints `'yes'`, otherwise it prints `'no'`.

For example, string `s = [a, b, c]` and string `t = [d, e, f]`. The number of moves `k = 6`. To convert s to t, we first remove all characters using 3 moves. Then we concatenate each of the characters of t in the order. In the sixth move, you will have the expected string s. If more movements are available than necessary, they can be eliminated by performing multiple removals on an empty string. If there are fewer movements, it would not be possible to create the new string.

Develop a C/C++ or Java language program that implements and uses the `ConcatRemove(s, t, k)` function. It should return the results `'yes'` or `'no'`.
The function has the following parameters:
s: starting string
t: desired string
k: an integer that represents the number of operations

Input format
The first line contains the string s, the starting string.
The second line contains the string t, the desired string.
The third line contains an integer k, the number of operations.

Constrains
a) `1 <= |s| <= 100`
b) `1 <= |t| <= 100`
c) `1 <= k <= 100`
d) s and t consists of lowercase letters of the Portuguese alphabet, ascii [a-z]

Output format
Print `'yes'` if you can get the string t by executing exactly k operations on the string s, and print `'no'` otherwise.

Example 1
```
bla bla bla bla
blablabcde
8
yes
```

Explanation
It took 5 operations to reduce the string `"blablablabla"` to `"blablab"`. Then, 3 concatenation operations (c, d, e) were needed to obtain the string `"blablabcde"`.
In this way, as it was possible to convert s to t using exactly k = 8 operations, the program printed `"yes"`.

Example 2
```
tab
tab
7
yes
```

Explanation
It took 4 operations to reduce the string s (remember that a removal operation on an empty string, keeps the string empty). Then, 3 concatenation operations were performed (a, b, a). Since it was possible to convert s to t using exactly `k = 7` operations, the prog

### Question 4

 Write an Unit Test using C/C++ or Java for the function `ConcatRemove(s,t,k)`.

### Question 5

Consider the following problem

Two tables are provided: Students and Notes.

Students contains three columns: ID, Name and Value.

|Coluna|Tipo|
|---|---|
|ID|Integer|
|Name|String|
|Value|Integer|

The table Notes contains three Integers columns: Grade, Min_Value and Max_Value filled according example bellow:

|Grade|Min_Value|Max_Value|
|---|:---:|:---:|
|1|0|9|
|2|10|19|
|3|20|29|
|4|30|39|
|5|40|49|
|6|50|59|
|7|60|69|
|8|70|79|
|9|80|89|
|10|90|100|


Joana gives Eva the task of generating a report containing three columns: Name, Grade and Value. Joana does not want the names of students who received a grade lower than 8. The report must be in descending order by grade, that is, the highest grades are inserted first. If there are more than one student with the same grade (8-10) assigned to them, sort those students in particular by their names in alphabetical order. Finally, if the grade is less than 8, use "NULL" as the name and list them in grades in descending order. If there are more than one student with the same grade (1-7) assigned to them, sort those students in particular by their grades in ascending order.

Write an SQL query to help Eva.

Input example
|ID|Name|Value|
|---|---|:---:|
|1|Julia|81|
|2|Carol|68|
|3|Maria|99|
|4|Andreia|78|
|5|Jaqueline|63|
|6|Marcela|88|

Output example
```
Maria 10 99
Marcela 9 88
Julia 9 81
Andreia 8 78
NULL 7 63
NULL 7 68
```

Note: Print "NULL" in the name if the grade is less than 8.

Explanation
Consider the following table with the grades assigned to students:

|ID|Name|Value|Grade|
|---|---|:---:|:---:|
|1|Julia|81|9|
|2|Carol|68|7|
|3|Maria|99|10|
|4|Andreia|78|8|
|5|Jaqueline|63|7|
|6|Marcela|88|9|


Thus, the following students obtained grades 8, 9 or 10:
```
Mary (10)
Marcela (9)
Julia (9)
Andreia (8)
```

### Question 7

Information about pets is kept in two separate tables:

```sql
TABLE dogs
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL
```

```sql
TABLE cats
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL
```

Write an SQL query that select all distinct pet names.

### Question 8

Consider a software utility called ‘bq’ that allows the user to read runtime, persistent data structures.

Commands:

|bq|Starts utility from linux command prompt|
|rel <relation name>|Specify which data structure, also known as a relation, to access|
|di|Display data structure of relation identified|
|key<br>key <key values>|Request system to prompt for key values for the relation identified, or specify the key to read|
|re k|Read the record associated with the key value identified|
|re f|Read the first record|
|re l|Read the last record|
|re n|Read the next record|
|re p|Read the previous record|
|x|Exit the utility|

Upload into your Github / Gitlab or Bitbucket account a solution for the following problems:

Problem #1
I have a relation ABC. 

What are the sequence of commands to determine its structure?

Problem #2

I have a relation XYZ. 

Its structure is:

```
XYZ =  { file (B1) of } record
B1   : integer;     { block number   B1
Name : Char8;       { B1 name
end;
```

What are the sequence of commands to read the first and last records of relation XYZ?

Problem #3
Continuing with relation XYZ

What are the seuquence of commands to read key value 10 and the next 2 records?

### Question 9

Make a program in C/C++ or Java language that calculates the length of a string informed by the user (do not use any pre-existing function or method for this, such as `len()`, `count()`, `strlen()` or `lenght()`);