//Author: Aaron Spindler
#include <iostream>
#include <fstream>
#include "vec2.h"

using namespace std;

int main()
{
    vec2 a;             // Initializes a equal to (0,0)
    cout << "a: " << a << endl;
    a[0] = 2.0;         // Now a is (2., 0)
    cout << "a: " << a << endl; // Prints (2., 0) on the standard output


    vec2 b(a);          // Creates a vector b from a
    cout << "b: " << b << endl;
    b *= 5;             // Multiplies b with 5, so b is (10., 0)
    cout << "b: " << b << endl;

    float a_dot_b = a * b;    //Calculate the dot
    cout << "Dot: " << a_dot_b << endl;

    vec2 c;
    c = a = b;           // Set c and a equal to b.
    cout << "a: " << a << endl;
    cout << "c: " << c << endl;

    vec2 d(1.0, 2.0);    // Initializes a vector d equal to (1., 2.)
    cout << "d: " << d << endl;
    d.normalize();        // Normalizes d
    cout << "d: " << d << endl;

    return 0;
}
