#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strncpy;

#include "date.h"
#include "employee.h"

Employee::Employee(const char *const first, const char *const last, const Date &date_of_birth, const Date &date_of_hire) :
		birth_date(date_of_birth),
		hire_date(date_of_hire) {
	int length = strlen(first);
    length = (length < 25 ? length : 24);
    strncpy(first_name, first, length);
    first_name[length] = '\0';

    length = strlen(last);
    length = (length < 25 ? length : 24);
    strncpy(last_name, last, length);
    last_name[length] = '\0';

    cout << "Employee object constructor: "
    << first_name << ' ' << last_name << endl;
}

void Employee::print() const {

    cout << last_name << ", " << first_name << " Hired: ";
    hire_date.print();
    cout << " Birthday: ";
    birth_date.print();
    cout << endl;
}

Employee::~Employee() {
    cout << "Empliyee object destructor: "
    << last_name << ", " << first_name << endl;
}
