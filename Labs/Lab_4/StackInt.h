#ifndef __StackInt_h__
#define __StackInt_h__

#include <iostream>
#include <fstream>

#include "Buffer.h"
#include "Stack.h"

using namespace std;

class StackInt : public Stack
{
public:
  StackInt();
  ~StackInt();

  void push(int a);
  int pop();
  int read(istream& is);
  int write(ostream& os);

  friend ostream& operator<< (ostream& os, const Stack& s);
};

#endif
