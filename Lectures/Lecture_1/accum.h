#include <iostream>
using namespace std;

class Accum {
  private:
    int sum;
  public:
    Accum();
    void add(int a);
    friend ostream& operator<<(ostream& os, const Accum& ac);
};
