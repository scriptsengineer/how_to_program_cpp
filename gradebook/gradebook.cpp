#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "gradebook.h"

GradeBook::GradeBook(string name) {
	set_course_name(name);
	a_count = 0;
	b_count = 0;
	c_count = 0;
	d_count = 0;
	f_count = 0;
}

void GradeBook::set_course_name(string name) {
	if (name.length() <= 25) {
		course_name = name;
	} else {
		course_name = name.substr(0, 25);

		cout << "Name \"" << name << "\"exceeds maximum length (25).\n"
			 << "Limiting courseName  to first 25 characters.\n"
			 << endl;
	}
}

string GradeBook::get_course_name() {
	return course_name;
}

void GradeBook::diplay_message() {
	cout << "Welcome to the grade book for\n"
		 << get_course_name() << "!" << endl;
}

void GradeBook::determine_class_average() {
	int total;
	int grade_counter;
	int grade;
	double average;

	total = 0;
	grade_counter = 0;

	cout << "Enter grade or -1 to quit: ";
	cin >> grade;

	while (grade != -1) {
		total = total + grade;
		grade_counter = grade_counter + 1;

		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}

	if (grade_counter > 0) {
		average = static_cast<double>(total) / grade_counter;
		cout << "\nTotal of all " << grade_counter << " grades entered is " << total << endl;
		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	} else {
		cout << "No grades were entered" << endl;
	}
}

void GradeBook::input_grades() {
	int grade;

	cout << "Enter the letter grades." << endl
		 << "Enter the EOF character to end input." << endl;

	while ((grade = cin.get()) != EOF) {
		switch (grade) {
			case 'A':
			case 'a':
				a_count++;
				break;
			case 'B':
			case 'b':
				b_count++;
			case 'C':
			case 'c':
				c_count++;
			case 'D':
			case 'd':
				d_count++;
			case 'F':
			case 'f':
				f_count++;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				cout << "Incorrect letter grade entered." << endl
					 << "Enter a new grade." << endl;
				break;
		}

		student_maximum = maximum(1, 2, 3);
	}
}

void GradeBook::display_grade_report() {
	cout << "\n\nNumber of students who received each letter grade:"
	<< "\nA: " << a_count
	<< "\nB: " << b_count
	<< "\nC: " << c_count
	<< "\nD: " << d_count
	<< "\nF: " << f_count
	<< endl;

}

int GradeBook::maximum(int x, int y, int z) {
	int maximum_value = x;

	if (y > maximum_value) {
		maximum_value = y;
	}
	if (z > maximum_value) {
		maximum_value = z;
	}
	return maximum_value;
}
