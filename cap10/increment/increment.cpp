#include <iostream>
using std::cout;
using std::endl;

#include "increment.h"

Increment::Increment(int c, int i) :
		count(c), increment(i) {
}

void Increment::print() const {
    cout << "count = " << count << ", increment = " << increment << endl;
}