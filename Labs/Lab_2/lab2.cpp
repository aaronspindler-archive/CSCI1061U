#include <iostream>
#include "maxarr.h"
#include "minarr.h"
#include "multarr.h"
#include "prnarr.h"
#include "revarr.h"
#include "statarr.h"

using namespace std;

int main(){
  float arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  prn(arr,5);

  float _min = min(arr,5);
  cout << "min = " << _min << endl;

  float _max = max(arr,5);
  cout << "max = " << _max << endl;

  float ave, sd;
  stat(arr, 5, ave, sd);
  cout << "ave = " << ave << endl;
  cout << "sd = " << sd << endl;

  reverse(arr,5);
  prn(arr,5);

  float scalar = 10.0;
  mult(arr,5,scalar);
  prn(arr,5);

  return 0;
}
