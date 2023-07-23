#include<iostream>
using std::cout;
using std::endl;

void cube_by_reference(int *);

int main() {
    int number = 5;
    cout << "The original value of number is " << number;

    cube_by_reference(&number);

    cout << "\nThe new value of number is " << number << endl;

    return 0;
}

void cube_by_reference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}