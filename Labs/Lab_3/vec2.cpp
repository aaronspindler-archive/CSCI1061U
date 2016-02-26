//Author: Aaron Spindler
#include "vec2.h"
#include <iostream>
#include <math.h>

using namespace std;

vec2::vec2(){
  _a = 0.0;
  _b = 0.0;
}

vec2::~vec2(){}

vec2::vec2(float a1, float a2){
  _a = a1;
  _b = a2;
}

vec2::vec2(const vec2& otherVec){
  _a = otherVec._a;
  _b = otherVec._b;
}

ostream& operator<< (ostream& o, const vec2& a){
  o << "(" << a._a << "," << a._b << ")";
}

vec2& vec2::operator*=(float multiplier){
  _a = _a * multiplier;
  _b = _b * multiplier;
}

float& vec2::operator[](float i){
  if(i == 0){
    return _a;
  }else if(i == 1){
    return _b;
  }
}

vec2& vec2::operator=(vec2& a){
  _a = a._a;
  _b = a._b;
}

float vec2::operator*(vec2& a){
  return (a._a * this->_a) + (a._b * this->_b);
}

void vec2::normalize(){
  float length = sqrt(pow(_a,2) + pow(_b,2));
  _a = _a/length;
  _b = _b/length;
}
