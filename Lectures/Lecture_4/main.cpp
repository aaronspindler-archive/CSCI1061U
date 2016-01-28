#include <iostream>
#include "Arr.h"
using namespace std;

int main(void)
{
    Arr a(3);
    cout << "size of a = " << a.size() << endl;
    for (int i=0; i<3; ++i) {
        a[i] = i;
    }
    cout << "a = " << a << endl;

    Arr b(7);
    cout << "size of b = " << b.size() << endl;
    for (int i=0; i<7; ++i) {
        b[i] = i+89;
    }
    cout << "b = " << b << endl;

    a = b;
    cout << "size of a = " << a.size() << endl;
    cout << "a = " << a << endl;

    return 0;
}
