#include <string>
using std::string;

class GradeBook {
public:
	GradeBook(string name);
	void set_course_name(string name);
	string get_course_name();
	void diplay_message();
	void determine_class_average();
	void input_grades();
	void display_grade_report();
	int maximum(int, int, int);

private:
	string course_name;
	int a_count;
	int b_count;
	int c_count;
	int d_count;
	int f_count;
	int student_maximum;
};