#include <iostream>

using namespace std;

class Arr
{
  protected:
  int *a_;
  int n_;

  public:
  Arr();
  Arr(int n);
  ~Arr();

  void resize(int n);
  void prn();
  void gen();
};



Arr::Arr() : a_(0), n_(0)
{}

Arr::Arr(int n) : n_(n)
{
  a_ = new int[n_];
}

Arr::~Arr()
{
  if (a_) delete[] a_;
}

void Arr::resize(int n)
{
  int* tmp = new int[n];

  int ncopy = n < n_ ? n : n_;
  for (int i=0; i<ncopy; ++i)
  {
    tmp[i] = a_[i];
  }
  delete[] a_;

  n_ = n;
  a_ = tmp;
}

void Arr::prn() {
  cout << "[" << n_ << "]: ";

  for (int i=0; i<n_; ++i) {
    cout << a_[i] << " ";
  }
  cout << endl;
}

void Arr::gen() {
  for (int i=0; i<n_; ++i){
    a_[i] = i;
  }
}


int main() {

  Arr a1;
  a1.gen();
  a1.prn();

  Arr a2(4);
  a2.gen();
  a2.prn();

  a2.resize(8);
  a2.prn();

  return 0;
}
