#include "Course.h"

void Course::EnrollStudent(Student& StudentN) {
  Student* DeepCopy = new Student[this->NumberOfEnrolledStudents];
  for (int Index = 0; Index < this->NumberOfEnrolledStudents; ++Index) {
    DeepCopy[Index] = this->EnrolledStudents[Index];
  }

  ++this->NumberOfEnrolledStudents;

  this->EnrolledStudents = new Student[this->NumberOfEnrolledStudents];
  for (int Index = 0; Index < this->NumberOfEnrolledStudents - 1; ++Index) {
    this->EnrolledStudents[Index] = DeepCopy[Index];
  }
  this->EnrolledStudents[this->NumberOfEnrolledStudents - 1] = StudentN;
};
void Course::ExpellStudent(Student& StudentN) {
  Student* DeepCopy = new Student[this->NumberOfEnrolledStudents];
  int ExpellIndex = 0;

  for (int Index = 0; Index < this->NumberOfEnrolledStudents; ++Index) {
    DeepCopy[Index] = this->EnrolledStudents[Index];
    if (EnrolledStudents[Index].GetPersonID() == StudentN.GetPersonID()) {
      ExpellIndex = Index;
    }
  }

  --this->NumberOfEnrolledStudents;
  Student* EnrolledStudents = new Student[this->NumberOfEnrolledStudents];
  int Minusflag = 0;
  for (int Index = 0; Index <= this->NumberOfEnrolledStudents; ++Index) {
    if (Index == ExpellIndex) {
      Minusflag = 1;
      continue;
    }

    this->EnrolledStudents[Index - Minusflag] = DeepCopy[Index];
  }
};
void Course::DisplayAllStudents() {
  for (int Index = 0; Index < this->NumberOfEnrolledStudents; ++Index) {
    std::cout << EnrolledStudents[Index].GetPersonName() << std::endl;
  }
};

Course::Course(std::string CourseName, int CourseCode, int Credits)
    : CourseName(CourseName), CourseCode(CourseCode), Credits(Credits) {};

Course::~Course() { delete[] EnrolledStudents; };
