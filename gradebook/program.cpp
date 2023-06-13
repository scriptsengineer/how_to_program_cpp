#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "gradebook.h"
#include "analysis.h"

int main() {

	// GradeBook grade_book_1("CS101 C++ Programming");

	// grade_book_1.diplay_message();
	// grade_book_1.determine_class_average();

	Analysis application;
	application.process_exam_results();

	return 0;
}