#include <iostream>
using std::cout;
using std::endl;

int square_by_value(int);
void square_by_reference(int &);

int main() {
	int x = 2;
	int z = 4;

	cout << "x = " << x << " before square_by_value\n"
		 << endl;
	cout << "Value returned by square_by_value: " << square_by_value(x) << endl;
	cout << "x = " << x << " after square_by_value\n"
		 << endl;

	cout << "z = " << z << " before square_by_reference\n"
		 << endl;
	square_by_reference(z);
	cout << "z = " << z << " after square_by_reference\n"
		 << endl;
}

int square_by_value(int number) {
	return number * number;
}

void square_by_reference(int &number) {
	number *= number;
}