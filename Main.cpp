#include "Student.h"
#include "Course.h"

int main() {
  std::cout << "Creating 3 students" << std::endl;
  Student Saim("Saim", 1, 16, 5);
  Student Raza("Raza", 12, 420, 10);
  Student Usman("Usman", 11, 11, 2000);

  std::cout << "Test Successfull" << std::endl;

  std::cout << "Testing Copying of Constructors" << std::endl;

  Student NewCopyOfSaim(Saim);

  std::cout << NewCopyOfSaim.GetPersonName() << std::endl;
  std::cout << NewCopyOfSaim.GetPersonAge() << std::endl;
  std::cout << NewCopyOfSaim.GetPersonID() << std::endl;

  std::cout << "Test Successfull" << std::endl;

  std::cout << "Testing Course creation and Student Enrollment" << std::endl;
  std::cout << "COURSE" << std::endl;
  Course Robotics("Robotics", 188, 5);
  std::cout << "Enroll" << std::endl;
  Robotics.EnrollStudent(Saim);
  Robotics.EnrollStudent(Raza);
  Robotics.EnrollStudent(Usman);
  std::cout << "DISPLAY" << std::endl;
  Robotics.DisplayAllStudents();
  Saim.addGrade(1, 10);
  std::cout << Saim.calculateGPA() << std::endl;

    std::cout
      << "Test Successfull" << std::endl;
}

// .. ..-. ....... .- .. ....... .. ... ....... -.-. .... . -.-. -.- .. -. --. ....... - .... ..
// ... --..-- ....... --. .. ...- . ....... -- . ....... .- ....... ..-. ..- .-.. .-.. ....... --.
// .-. .- -.. . --..-- ....... - .... .. ... ....... .. ... ....... .--. .- .-. - ....... --- ..-.
// ....... - .... . ....... .--. .-. --- -- .--. - --..-- ....... -.. --- ....... -. --- - .......
// -.. . -.-. --- -.. . -.. ....... - .... .. ... --..-- ....... .--- ..- ... - ....... .--. . .-.
// ..-. --- .-. -- ....... - .... . ....... .- -.-. - .. --- -.