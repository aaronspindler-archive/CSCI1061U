#ifndef __Student_h__
#define __Student_h__

#include <iostream>
#include "Person.h"

class Student : public Person
{
  public:
    int year;
    Student();
    Student(const char* n, int y);

    ~Student();

    friend ostream& operator<<(ostream& os, const Student& s);
    friend istream& operator>>(istream& is, Student& s);
};

#endif
