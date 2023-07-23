#include <iostream>
using std::cout;
using std::endl;

int main() {
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The Value of aPtr is " << aPtr << endl;
    cout << "The Value of a is " << a << endl;
    cout << "The Value of *aPtr is " << *aPtr << endl;
    cout << "Showing that * and & are inverses of each other." << endl;
    cout << "&*aPtr = " << &*aPtr << endl;
    cout << "*&aPtr = " << *&aPtr << endl;
    return 0;
}