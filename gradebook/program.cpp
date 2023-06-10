#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook {
public:
	void diplay_message(string course_name) {
		cout << "Welcome to the grade book for\n" << course_name << "!" << endl;
	}
};

int main() {
    string name_of_course;
	GradeBook my_grade_book;

    cout << "Please enter the course name:" << endl;
    getline(cin, name_of_course);
    cout << endl;

	my_grade_book.diplay_message(name_of_course);
	return 0;
}