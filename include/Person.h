#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

class Person {
 private:
  std::string Name;
  int Age;
  int ID;
  std::string GetName();
  int GetID();
  int GetAge();
  void SetID(int ID);
  void SetAge(int Age);
  void SetName(std::string Name);

 public:
  int GetPersonID();
  std::string GetPersonName();
  int GetPersonAge();
  void SetPersonID(int ID);
  void SetPersonAge(int Age);
  void SetPersonName(std::string Name);
  void SetPersonEmail(std::string Email);
  Person();

  Person(Person& OverridingConstruct);

  Person(std::string Name, int ID, int Age);

  ~Person();

 protected:
  std::string Email;
};

#endif