#include <string>
using std::string;

class GradeBook {
public:
	const static int students = 10;
	const static int tests = 3;

	GradeBook(string name, const int[][3]);

	void set_course_name(string name);
	string get_course_name();
	void diplay_message();
	void process_grades();
	int get_minimum();
	int get_maximum();
	double get_average(const int [], const int);
	void output_bar_chart();
	void output_grades();

private:
	string course_name;
	int grades[students][tests];
};