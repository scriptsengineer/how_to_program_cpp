#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

int main() {
	unsigned seed = 0;
	cout << "Enter seed: ";
	cin >> seed;
	srand(seed);

	for (int counter = 1; counter <= 20; counter++) {
		cout << setw(10) << (1 + rand() % 6);
		if (counter % 5 == 0) {
			cout << endl;
		}
	}

	return 0;
}