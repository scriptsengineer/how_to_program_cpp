#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "analysis.h"

void Analysis::process_exam_results() {
	int passes = 0;
	int failures = 0;
	int student_counter = 1;
	int result;

	while (student_counter <= 10) {

		cout << "Enter result (1 = pass, 2 = fail)";
		cin >> result;

		if (result == 1) {
			passes++;
		} else {
			failures++;
		}

		student_counter++;
	}

	cout << "Passed " << passes << "\nFailed " << failures << endl;

    if(passes > 8){
        cout << "Raise tuition " << endl;
    }
}