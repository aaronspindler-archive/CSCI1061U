// inherit.cpp
#include <iostream>
#include <typeinfo>
#include <stdio.h>
#include <string.h>
#include "Person.h"
#include "Student.h"

using namespace std;

#define MAX 3

void test1(){
  Student* foo = new Student();
  foo->set_name("Foo");
  cout << *foo << endl;

  Student* boo = new Student(6);
  boo->set_name("Boo");
  cout << *boo << endl;
}

int main(){

  test1();

  int c, i = 0;
  Person* db[MAX];

  while (i < MAX)
  {
    cout << "Enter choice - 1) person, 2) student, 0) to exit:" << endl;
    cin >> c;

    switch (c)
    {
      case 0:
        return 0;
        break;
      case 1:
        {
        cout << "Adding a person." << endl;
        Person* p = new Person();
        cout << "Enter name." << endl;
        cin >> *p;
        db[i] = p;
        ++i;
        break;
        }
      case 2:
        {
        cout << "Adding a student." << endl;
        Student* s = new Student();
        cout << "Enter name and grade." << endl;
        cin >> *s;
        db[i] = s;
        ++i;
        break;
        }
      default:
        cout << "Invalid input." << endl;
        break;
     }
  }

  cout << "db size = " <<  i << endl;

  // Lets print our db
  for (int j=0; j < i; ++j) cout << *db[j] << endl;
}
