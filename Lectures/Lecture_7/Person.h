// Person.h
#ifndef __Person_h__
#define __Person_h__

#include <iostream>
using namespace std;

#define MAX_NAME_LEN 36

class Person
{
  protected:
  char name[MAX_NAME_LEN];

  public:
  Person();
  Person(const char* name);
  ~Person();

  friend ostream& operator<<(ostream& os, const Person& p);
  friend istream& operator>>(istream& is, Person& p);
};

#endif
