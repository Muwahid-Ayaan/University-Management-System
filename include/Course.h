#ifndef COURSE_H
#define COURSE_H
#include "Student.h"
#include <string>
#include <iostream>

class Course {
 private:
  std::string CourseName;
  int CourseCode;
  int Credits;
  Student* EnrolledStudents;
  int NumberOfEnrolledStudents;

 public:
  void EnrollStudent(Student& StudentN);
  void ExpellStudent(Student& StudentN);
  void DisplayAllStudents();
  Course();
    
  Course(std::string CourseName, int CourseCode, int Credits);

  ~Course();
};

#endif