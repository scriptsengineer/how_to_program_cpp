#include <iostream>
using std::cout;
using std::endl;
#include "date.h"

Date::Date(int mn, int dy, int yr) {
	if (mn > 0 && mn <= 12) {
		month = mn;
	} else {
		month = 1;
		cout << "Invalid month (" << mn << ") set to 1." << endl;
	}

	year = yr;
	day = check_day(dy);

	cout << "Data object cosntructor for date ";
	print();
	cout << endl;
}

void Date::print() const {
	cout << month << '/' << day << '/' << year;
}

Date::~Date() {
	cout << "Date object destructor for date ";
	print();
	cout << endl;
}

int Date::check_day(int test_day) const {
	static const int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (test_day > 0 && test_day <= days_per_month[month - 1])
		return test_day;

	if (month == 2 && test_day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
	return test_day;
	
	cout << "Invalid day (" << test_day << ") set to 1.\n";
	return 1;
}
