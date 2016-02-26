//Author: Aaron Spindler
#ifndef __vec2_h__
#define __vec2_h__

#include <iostream>
using namespace std;

class vec2 {
private:
  //Vector Variables
  float _a;
  float _b;
public:
  //Constructors
  vec2();
  vec2(float a1, float a2);
  vec2(const vec2& otherVec);
  //Destructor
  ~vec2();

  void normalize();

  //Operators
  vec2& operator*=(float multiplier); //Multiply
  const vec2& operator=(const vec2& o); // Set vector to other vector
  float operator*(vec2& a); // Dot

  float& operator[](float i); //Vector Value Assignment

  vec2& operator=(vec2& a); //Vector Assignment

  //Print out
  friend ostream& operator<< (ostream& o, const vec2& a);
};
#endif
