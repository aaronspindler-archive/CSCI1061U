#ifndef __Stack_h__
#define __Stack_h__

#include <iostream>
#include <fstream>

#include "Buffer.h"

using namespace std;

class Stack : public Buffer
{
public:
  int slotsLeft;
  int size;

public:
  Stack();
  ~Stack();

  void push(char a);
  char pop();
  int read(istream& is);
  int write(ostream& os);


  friend ostream& operator<< (ostream& os, Stack& s);
};

#endif
