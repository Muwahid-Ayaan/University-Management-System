# 🎓 University Management System

## 📌 Overview
The **University Management System** is a C++ project built to demonstrate **Object-Oriented Programming (OOP)** concepts such as encapsulation, inheritance, dynamic memory management, and abstraction.  

It models essential entities like **Person, Student, and Course**, allowing management of students, their grades, and course enrollments.  
This project is intended for learning purposes but can be extended into a more complete academic management system.  

---

## 🚀 Features
- 👤 **Person Class** – Base class with attributes, constructors, and encapsulation.
- 🎓 **Student Class** – Derived from Person, manages grades (dynamic memory), GPA calculation, and course-related data.
- 📚 **Course Class** – Handles course details and student enrollments.
- 🛡 **Encapsulation** – Private and protected members with public getters and setters.
- 🔄 **Deep Copying** – Copy constructors implemented to avoid shallow copy issues.
- 🗑 **Proper Memory Management** – Destructors free allocated memory safely.

---

## 🏗 Class Design

### 1. **Person Class**
- **Private Members**: `name`, `age`, `id`
- **Protected Members**: `email`
- **Public Methods**: Getters/setters, constructors (default, parameterized, copy), destructor (displays farewell message)

### 2. **Student Class (inherits Person)**
- **Private Members**: `grades` (dynamic array), `numCourses`, `gpa`
- **Methods**:
  - `calculateGPA()`
  - `addGrade(int courseIndex, double grade)`
- **Special**: Copy constructor with **deep copy**, destructor deallocates grades.

### 3. **Course Class**
- **Private Members**: `courseName`, `courseCode`, `credits`, `enrolledStudents` (dynamic array of Student pointers)
- **Methods**:
  - `addStudent(Student* s)`
  - `removeStudent(Student* s)`
  - `displayEnrolledStudents()`

---

## 🛠 Technologies Used
- Language: **C++17**
- Build System: **CMake**
- Core Concepts: **Encapsulation, Inheritance, Dynamic Memory Management**


