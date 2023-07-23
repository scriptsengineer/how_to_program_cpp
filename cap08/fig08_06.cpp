#include<iostream>

using std::cout;
using std::endl;

int cube_by_value(int);

int main() {
    int number = 5;
    cout << "The original value of number is " << number;

    number = cube_by_value(number);

    cout << "\nThe new value of number is " << number << endl;

    return 0;
}

int cube_by_value(int n) {
    return n * n * n;
}