#include <iostream>
using std::cin;
using std::cout;
using std::endl;

inline double cube(const double side) {
    return side * side * side;
}

int main() {
    double side_value;
    cout << "Enter the side length of your cube:";
    cin >> side_value;

    cout << "Volume of cube with side " << side_value << " is " << cube(side_value);
}