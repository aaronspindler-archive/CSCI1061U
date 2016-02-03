#include <limits>
#include "minarr.h"


float min(const float* arr, int arr_size){

  float minVal = 10000000000000;

  for(int i = 0; i < arr_size; i++){
    if(arr[i] < minVal){
      minVal = arr[i];
    }
  }

  return minVal;
}
