#include <string>
using std::string;

class GradeBook {
public:
	GradeBook(string name);
	void set_course_name(string name);
	string get_course_name();
	void diplay_message();
	void determine_class_average();

private:
	string course_name;
};