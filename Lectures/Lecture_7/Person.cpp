// Person.cpp
#include "Person.h"
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
