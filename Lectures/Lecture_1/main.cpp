// This is the main.cpp file

#include <iostream>
#include "accum.h"
using namespace std;

int main(int argc, char** argv)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, -1};

    Accum accumulator;
    int i = 0;
    while (nums[i] >= 0) {
        accumulator.add(nums[i]);
        ++i;
    }
    cout << accumulator;

    return 0;
}
