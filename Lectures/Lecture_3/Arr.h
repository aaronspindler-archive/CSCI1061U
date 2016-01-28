#ifndef __Arr_h__
#define __Arr_h__

#include <iostream>

class Arr{
private:
  int* mem;
  int n;
public:
  Arr(int n);
  ~Arr();
  int& operator[] (int i);
  friend std::ostream& operator << (std::ostream& o, const Arr& a);
};

#endif
