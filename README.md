🎓 University Management System
📌 Overview

The University Management System is a C++ project that demonstrates the use of Object-Oriented Programming (OOP) principles such as encapsulation, inheritance, dynamic memory management, and polymorphism.

It models real-world entities like Person, Student, and Course and provides a simple yet effective way to manage student records, courses, and enrollments.

This project is designed for learning purposes but can be extended into a more complete academic management system.

🚀 Features

👤 Person Class – Base class with private and protected attributes, accessor methods, and constructors.

🎓 Student Class – Derived from Person, manages dynamic grades, GPA calculation, and course records.

📚 Course Class – Manages enrolled students, course details, and supports adding/removing students.

🛡 Encapsulation – Private/protected members with public getters and setters.

🔄 Deep Copying – Proper copy constructors to handle dynamic memory safely.

🗑 Memory Management – Destructors implemented to avoid memory leaks.

🏗 System Design
1. Person Class

Private: name, age, id

Protected: email

Public: Getters/setters, constructors (default, parameterized, copy), destructor with farewell message

2. Student Class (inherits Person)

Private: grades (dynamic array), numCourses, gpa

Methods:

calculateGPA()

addGrade(int courseIndex, double grade)

Proper dynamic memory allocation/deallocation

3. Course Class

Private: courseName, courseCode, credits

Private: enrolledStudents (dynamic array of Student pointers)

Methods:

addStudent(Student* s)

removeStudent(Student* s)

displayEnrolledStudents()

🛠 Technologies Used

Language: C++17

Build System: CMake

OOP Principles: Inheritance, Encapsulation, Abstraction, Dynamic Memory Management
