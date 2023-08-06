#include <iostream>
using std::cout;

#include"increment.h"

int main() {
    Increment value(10, 5);

    cout << "Before incrementing: ";
    value.print();
    for (int j = 0; j <= 3; j++)
    {
        value.add_increment();
        cout << "After increment " << j << ": ";
        value.print();
    }

    return 0;
    
}