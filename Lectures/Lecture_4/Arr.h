#ifndef __Arr_h__
#define __Arr_h__

#include <iostream>
using namespace std;

class Arr {
private:
    int n;
    int* mem;

public:
    Arr(int n);
    ~Arr();

    // TO DO - Assignment Operator
    // Add any other helper functions
    // that you may need, including
    // a destructor.

    const Arr& operator=(const Arr& o);

    const int& operator[](int i) const;
    int& operator[](int i);
    int size();
    friend ostream& operator<< (ostream& o, const Arr& a);
};
#endif
