#include <iostream>
using std::cout;
using std::endl;

#include "employee.h"

int main() {
	Date birth(7, 25, 1949);
	Date hire(3, 12, 1988);
	Employee manager("Bob", "Blue", birth, hire);

	cout << endl;
	manager.print();

	cout << "\nTest Date constructor with invalid values:\n";
	Date last_day_off(14, 35, 1994);
	cout << endl;
	return 0;
}