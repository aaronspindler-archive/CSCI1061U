// Person.h
#ifndef __Person_h__
#define __Person_h__

#include <iostream>
using namespace std;

#define MAX_NAME_LEN 36

class Person
{
private:
  char name[MAX_NAME_LEN];

public:
  Person();
  Person(const char* name);
  virtual ~Person();

  void set_name(const char* _name);
  const char* get_name()const;

  friend ostream& operator<<(ostream& os, const Person& p);
  friend istream& operator>>(istream& is, Person& p);
};

#endif
