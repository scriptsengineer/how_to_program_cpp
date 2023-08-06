#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "date.h";

class Employee {
public:
    Employee(const char * const, const char *const, const Date&, const Date&);
    void print() const;
    ~Employee();
private:
    char first_name[25];
    char last_name[25];
    const Date birth_date;
    const Date hire_date;
};

#endif