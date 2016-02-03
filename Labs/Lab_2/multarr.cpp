#include "multarr.h"

void mult(float* arr, int arr_size, float scalar){
  for(int i = 0; i < arr_size; i++){
    arr[i] = arr[i] * scalar;
  }
}
