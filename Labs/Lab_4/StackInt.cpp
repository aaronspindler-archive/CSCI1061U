#include "StackInt.h"

StackInt::StackInt(){
  slotsLeft = 10;
  size = 10;
}

StackInt::~StackInt(){}

void StackInt::push(int a){
  if(slotsLeft <= 5){
    resize(size + 10);
    size += 10;
    slotsLeft += 10;
  }
  m[size - slotsLeft] = (char)a;
  slotsLeft -= 1;
}

int StackInt::pop(){
  int intToReturn = (int) m[size - slotsLeft];
  slotsLeft += 1;
  return intToReturn;
}

ostream& operator<< (ostream& os, StackInt& s){
  cout << "StackInt: " << s.size - s.slotsLeft << "/" << s.size << " [";
  s.write(cout);
  cout << "]";
  return os;
}

int StackInt::write(ostream& os){
  int n = size - slotsLeft;
  for (int i=0; i<n; ++i){
    os << (int) m[i];
  }
  return n;
}

int StackInt::read(istream& is){
  int i=0;
  while (i<size) {
    is >> m[i];
    if (is.good() && !is.eof()) {
      ++i;
      continue;
    }
    break;
  }
  return i;
}
