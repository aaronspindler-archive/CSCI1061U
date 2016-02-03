#include "maxarr.h"

float max(const float* arr, int arr_size){
  float maxVal = -100000000;

  for(int i = 0; i < arr_size; i++){
    if(arr[i] > maxVal){
      maxVal = arr[i];
    }
  }

  return maxVal;
}
