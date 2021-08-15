-- Create tables
CREATE TABLE students (
  ID INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  value INTEGER not null,
  grade INTEGER DEFAULT 0
);

CREATE TABLE notes (
  grade INTEGER not NULL,
  min_value INTEGER NOT NULL,
  max_value INTEGER not null
);

-- Populate tables
INSERT INTO students (name, value) 
VALUES 
	("Julia", 81),
	("Carol",68),
	("Maria",99),
	("Andreia",78),
	("Jaqueline",63),
	("Marcela",88);

INSERT INTO notes 
VALUES 
	(1, 0, 9),
	(2, 10, 19),
	(3, 20, 29),
	(4, 30, 39),
	(5, 40, 49),
	(6, 50, 59),
	(7, 60, 69),
	(8, 70, 79),
	(9, 80, 89),
	(10, 90, 100);

-- Add grade info into students table
UPDATE students 
SET grade = (
     SELECT grade 
     FROM notes 
     WHERE notes.min_value <= students.value 
     AND notes.max_value >= students.value
);

-- Select data from table
SELECT 
	CASE
		WHEN grade >= 8 THEN name
		ELSE NULL
	END AS Name, 
grade AS Grade, 
value AS Value
FROM students
ORDER BY Grade DESC, Name ASC, Value ASC;

