#include <cmath>

float average3(float a, float b, float c)
{
    return (a + b + c) / 3.0;
}

void average(const float* arr, int arr_size, float& ave, float& sd){
  float sum = 0.0;
  for(int i = 0; i < arr_size; i++){
    sum += arr[i];
  }
  
  ave = sum/arr_size;

  float sum_dev = 0.0;
  for(int i=0; i < arr_size; ++i){
    sum_dev += (arr[i]-ave)*(arr[i]-ave);
  }

  sd = sqrt(sum_dev/arr_size);
}
