#include "Stack.h"

Stack::Stack(){
  slotsLeft = 10;
  size = 10;
}

Stack::~Stack(){}

void Stack::push(char a){
  if(slotsLeft <= 5){
    resize(size + 10);
    size += 10;
    slotsLeft += 10;
  }
  m[size - slotsLeft] = a;
  slotsLeft -= 1;
}

char Stack::pop(){
  char charToReturn = m[size - slotsLeft];
  slotsLeft += 1;
  return charToReturn;
}

ostream& operator<< (ostream& os, Stack& s){
  cout << "Stack: " << s.size - s.slotsLeft << "/" << s.size << " [";
  s.write(cout);
  cout << "]";
  return os;
}

int Stack::write(ostream& os){
  int n = size - slotsLeft;
  for (int i=0; i<n; ++i){
    os << m[i];
  }
  return n;
}

int Stack::read(istream& is){
  int i=0;
  while (i<size) {
    is >> m[i];
    if (is.good() && !is.eof()) {
      ++i;
      slotsLeft--;
      continue;
    }
    break;
  }
  return i;
}
