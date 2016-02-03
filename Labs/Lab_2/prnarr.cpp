#include <iostream>
#include "prnarr.h"

using namespace std;

void prn(const float* arr, int arr_size){
  cout << "Array: " << endl << "=========================================" << endl;
  for(int i = 0; i < arr_size - 1; i++){
    cout << "[" << arr[i] << "],";
  }
  cout << "[" << arr[arr_size - 1] << "]" << endl;
  cout << "=========================================" << endl;
}
