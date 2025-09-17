#include "Student.h"
double Student::calculateGPA() {
  double SumTotalGrades = 0;
  for (int NumCourse = 0; NumCourse < NumCourses; ++NumCourse) {
    SumTotalGrades += Grades[NumCourse];
  }
  return SumTotalGrades / (NumCourses * 1.0f);
};

Student::Student() {};
void Student::addGrade(int courseIndex, double grade) { this->Grades[courseIndex] = grade; }

Student::Student(Student& OverridingConstruct)
    : Person(OverridingConstruct.GetPersonName(), OverridingConstruct.GetPersonID(),
             OverridingConstruct.GetPersonAge()),
      NumCourses(OverridingConstruct.NumCourses) {
  SetPersonEmail(OverridingConstruct.Email);
  Grades = new double[NumCourses];
  for (int i = 0; i < NumCourses; ++i) {
    Grades[i] = OverridingConstruct.Grades[i];
  }
}

Student::Student(std::string Name, int ID, int Age, int NumCourses)
    : Person(Name, ID, Age), NumCourses(NumCourses) {
  Grades = new double[NumCourses];
  for (int Index = 0; Index < NumCourses; ++Index) {
    Grades[Index] = 0.0;
  }
};


Student::~Student() { /*delete[] Grades;*/ };
