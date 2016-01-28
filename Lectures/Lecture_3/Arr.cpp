#include "Arr.h"

Arr::Arr(int _n){
  n = _n;
  mem = new int[n];

  for(int i = 0; i < n; i++){
    mem[i] = 0;
  }
}

Arr::~Arr(){
  delete[] mem;
}

int& Arr::operator[] (int i){
  return mem[i];
}

std::ostream& operator<< (std::ostream& o, const Arr& a){
  for(int i = 0; i < a.n; ++i){
    o << a.mem[i] << " ";
  }
  return o;
}
