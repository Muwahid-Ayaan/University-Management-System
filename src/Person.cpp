#include "Person.h"

Person::Person() { std::cout << "Empty Person Instance / SELF MADE MESSAGE, NOT A ERROR" << std::endl; }

Person::Person(Person& OverridingConstruct) {
  OverridingConstruct.Name = GetPersonName();
  OverridingConstruct.Age = GetPersonAge();
};

Person::Person(std::string Name, int ID, int Age) : Name(Name), ID(ID), Age(Age) {
  std::cout << "Welcome to the University " << Name << std::endl;
};

Person::~Person() {
  std::cout << Name << " Has Left the University, GoodBye, Have a nice life ahead!" << std::endl;
}

std::string Person::GetName() { return this->Name; };
int Person::GetID() { return this->ID; };
int Person::GetAge() { return this->Age; };

void Person::SetID(int ID) { this->ID = ID; };

void Person::SetAge(int Age) { this->Age = Age; };

void Person::SetName(std::string Name) { this->Name = Name; };


void Person::SetPersonEmail(std::string Email){
  this->Email = Email; 
};


int Person::GetPersonID()  // API
{
  int Id = GetID();
  return Id;
};
std::string Person::GetPersonName()  // API
{
  std::string Name = GetName();
  return Name;
};
int Person::GetPersonAge()  // API
{
  int Age = GetAge();
  return Age;
};
void Person::SetPersonID(int ID)  // API
{
  SetID(ID);
};
void Person::SetPersonAge(int Age)  // API
{
  SetAge(Age);
};
void Person::SetPersonName(std::string Name)  // API
{
  SetName(Name);
};