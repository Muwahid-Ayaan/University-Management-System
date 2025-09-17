#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include "Person.h"

class Student : public Person {
 private:
  int NumCourses;
  double* Grades;
  int GPA;

 public:
  double calculateGPA();
  void addGrade(int courseIndex, double grade);
  Student();

  Student(Student& OverridingConstruct);
  Student(std::string Name, int ID, int Age, int NumCourses);
  ~Student();
};

#endif