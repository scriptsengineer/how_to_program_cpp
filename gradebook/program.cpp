#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "analysis.h"
#include "gradebook.h"

int main() {
	int grades_array[GradeBook::students][GradeBook::tests] = { { 87, 96, 70 },
		{ 68, 87, 90 },
		{ 94, 100, 90 },
		{ 100, 81, 82 },
		{ 83, 65, 85 },
		{ 78, 87, 65 },
		{ 85, 75, 83 },
		{ 91, 94, 100 },
		{ 76, 72, 84 },
		{ 87, 93, 73 } };

	GradeBook grade_book_1("CS101 C++ Programming", grades_array);

	grade_book_1.diplay_message();
	// grade_book_1.determine_class_average();
	grade_book_1.process_grades();

	// Analysis application;
	// application.process_exam_results();

	return 0;
}