#include "Arr.h"
using namespace std;

Arr::Arr(int _n) : n(_n)
{
    mem = new int[n];
}

Arr::~Arr()
{
  delete[] mem;
}

const Arr& Arr::operator=(const Arr& o){
  delete mem;
  n = o.n;
  mem = new int[n];

  for(int i = 0; i < n; i++){
    mem[i] = o[i];
  }

  return *this;
}

int& Arr::operator[](int i)
{
    return mem[i];
}

const int& Arr::operator[](int i) const
{
    return mem[i];
}

int Arr::size()
{
    return n;
}

ostream& operator<< (ostream& o, const Arr& a)
{
    o << "[ ";
    for (int i=0; i<a.n; ++i)
    {
        o << a[i] << ' ';
    }
    o << "]";
    return o;
}
