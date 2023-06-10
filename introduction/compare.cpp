#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {
	int number1;
	int number2;
	cout << "Enter number 1:";
	cin >> number1;
	cout << "Enter number 2:";
	cin >> number2;
	if (number1 == number2) {
        cout << number1 << "==" << number2 << endl;
	}
	if (number1 != number2) {
        cout << number1 << "!=" << number2 << endl;
	}
	if (number1 > number2) {
        cout << number1 << ">" << number2 << endl;
	}
	if (number1 < number2) {
        cout << number1 << "<" << number2 << endl;
	}
	if (number1 >= number2) {
        cout << number1 << ">=" << number2 << endl;
	}
	if (number1 <= number2) {
        cout << number1 << "<=" << number2 << endl;
	}
}