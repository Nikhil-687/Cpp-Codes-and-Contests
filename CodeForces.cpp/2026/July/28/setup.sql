CREATE DATABASE college;

USE college;

CREATE TABLE students (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT
);

INSERT INTO students VALUES
(1, 'Nikhil', 20),
(2, 'Rahul', 21);

CREATE TABLE courses (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    duration INT
);

INSERT INTO courses VALUES
(1, 'CSE', 2),
(2, 'IT', 1);

SELECT * FROM students;
SELECT * FROM courses;