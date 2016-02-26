#include <iostream>
#include "vec2.h"
using namespace std;

int main(void)
{
    vec2 a(2.0, 3.0);
    cout << "a = " << a << endl;

    vec2 b(1.0, 4.0);
    cout << "b = " << b << endl;

    float a_dot_b = a * b;
    cout << a << " * " << b << " = " << a_dot_b << endl;

    vec2 d(a);
    cout << "d = " << d << endl;
    cout << "d * 10 = " << d * 10 << endl;

    d *= 20;
    cout << "d = " << d << endl;

    return 0;
}
