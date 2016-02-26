#include "Student.h"
#include <string.h>

Student::Student(){}
Student::Student(const char* n, int y) : Person(name){
  year = y;
}

ostream& operator<<(ostream& os, const Student& s)
{
  os << "Student:" << endl;
  os << "\tname = " << s.name << endl;
  os << "\tyear = " << s.year << endl;
  return os;
}

istream& operator>>(istream& is, Student& s)
{
  is >> s.name;
  is >> s.year;
  return is;
}
