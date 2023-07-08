#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	const int array_size = 10;
	int s[array_size];

	for (int i = 0; i < array_size; i++) {
		s[i] = 2 + 2 * i;
	}

	cout << "Element" << setw(13) << "Value" << endl;

	for (int j = 0; j < array_size; j++) {
		cout << setw(7) << j << setw(13) << s[j] << endl;
	}

	return 0;
}