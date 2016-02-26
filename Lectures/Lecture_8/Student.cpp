#include "Student.h"

Student::Student(int num_grades){
  _num_grades = num_grades;
  grades = new int[num_grades];
}

Student::~Student(){
  delete[] grades;
}

void Student::add_grade(int id, int grade){
  if(id >= 0 && id < _num_grades){
    grades[id] = grade;
  }
}

istream& operator>>(istream& is, Student& s){
  return is;
}

ostream& operator<<(ostream& os, const Student& s){
  os << "Student: " << endl;
  os << "\tName = " << s.get_name() << endl;
  os << "\tGrades = " << s._num_grades << endl;

  for(int i = 0; i < s._num_grades;i++){
    os << "\t" << i << " = " << s.grades[i] << endl;
  }

  return os;
}
