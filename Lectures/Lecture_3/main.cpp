#include <iostream>
#include "Arr.h"

using namespace std;

int main(){
  Arr a(50000);
  a[0] = 22;
  a[3] = 44;
  cout << a << endl;
}
