#include <iostream>
using std::cout;
using std::endl;

size_t get_size(double *);

int main() {
    double array[20];

    cout << "The number of bytes in the array is " << sizeof(array);
    cout << "\nThe number of bytes returned by get_size is " << get_size(array) << endl;
    return 0;
}

size_t get_size(double *ptr) {
    return sizeof(ptr);
}