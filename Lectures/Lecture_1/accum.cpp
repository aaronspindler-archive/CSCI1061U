#include "accum.h"

Accum::Accum() {
  sum = 0;
}
void Accum::add(int a){
  sum += a;
}

ostream& operator<< (ostream& os, const Accum& ac){
    os << "Accumulator: " << endl;
    os << "\tsum = " << ac.sum << endl;
}
