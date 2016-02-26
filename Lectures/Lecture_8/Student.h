#ifndef __Student_h__
#define __Student_h__

#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person{
protected:
  int _num_grades;
  int* grades;
public:
  Student(int num_grades = 5);
  ~Student();

  void add_grade(int id, int grade);
  
  friend ostream& operator <<(ostream& os, const Student& s);
  friend istream& operator>>(istream& is, Student& s);
};

#endif
