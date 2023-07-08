#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "gradebook.h"

GradeBook::GradeBook(string name, const int grades_array[][tests]) {
	set_course_name(name);

	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			grades[student][test] = grades_array[student][test];
		}
	}
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

void GradeBook::process_grades() {
	output_grades();
	// cout << "\nClass average is " << setprecision(2) << fixed << get_average() << endl;
	cout << "\nLowest grade is " << get_minimum() << "\nHighest grade is " << get_maximum() << endl;
	output_bar_chart();
}

int GradeBook::get_minimum() {
	int low_grade = 100;
	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			if (grades[student][test] < low_grade) {
				low_grade = grades[student][test];
			}
		}
	}
	return low_grade;
}

int GradeBook::get_maximum() {
	int high_grade = 0;
	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			if (grades[student][test] > high_grade) {
				high_grade = grades[student][test];
			}
		}
	}

	return high_grade;
}

double GradeBook::get_average(const int set_of_grades[], const int grades) {
	int total = 0;

	for (int grade = 0; grade < grades; grade++) {
		total += set_of_grades[grade];
	}

	return static_cast<double>(total) / grades;
}

void GradeBook::output_bar_chart() {
	cout << "\nGrade distribution:" << endl;

	const int frequency_size = 11;
	int frequency[frequency_size] = { 0 };

	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++)
		{
			++frequency[grades[student][test] / 10];
		}
	}

	for (int count = 0; count < frequency_size; count++) {
		if (count == 0) {
			cout << " 0-9:";
		} else if (count == 100) {
			cout << " 100:";
		} else {
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";
		}

		for (int stars = 0; stars < frequency[count]; stars++) {
			cout << '*';
		}

		cout << endl;
	}
}

void GradeBook::output_grades() {
	cout << "\nThe grades are:\n\n";
	cout << "			"; 
	for (int test = 0; test < tests; test++)
	{
		cout << "Test " << test + 1 << " ";
	}

	cout << "Average" << endl;
	
	for (int student = 0; student < students; student++) {
		cout << "Student " << setw(2) << student + 1;
		for (int test = 0; test < tests; test++)
		{
			cout << setw(8) << grades[student][test];
		}
		double average = get_average(grades[student], tests);
		cout << setw(9) << setprecision(2) << fixed << average << endl;
	}
}
