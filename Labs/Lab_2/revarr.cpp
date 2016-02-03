#include "revarr.h"
#include <iostream>

using namespace std;

void reverse(float* arr, int arr_size){
  float revArray[arr_size];

  for(int i = arr_size - 1; i >= 0; i--){
    revArray[arr_size - 1 - i] = arr[i];
  }

  for(int i = 0; i < arr_size; i++){
    arr[i] = revArray[i];
  }
}
