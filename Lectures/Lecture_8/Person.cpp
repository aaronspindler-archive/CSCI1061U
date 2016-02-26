// Person.cpp
#include "Person.h"
#include <stdio.h>
#include <string.h>

Person::Person()
{
#ifdef DEBUG
  cout << "Person::Person() called." << endl;
#endif
}

Person::Person(const char* _name)
{
#ifdef DEBUG
  cout << "Person::Person(" << _name << ") called." << endl;
#endif
  strcpy(name, _name);
}

void Person::set_name(const char* _name){
  strcpy(name, _name);
}

const char* Person::get_name() const{
  return name;
}

Person::~Person()
{
#ifdef DEBUG
  cout << "Person::~Person() called. [" << name << "]" << endl;
#endif
}

ostream& operator<<(ostream& os, const Person& p)
{
  os << "Person:" << endl;
  os << "\tname = " << p.name << endl;
  return os;
}

istream& operator>>(istream& is, Person& p)
{
  is >> p.name;
  return is;
}
