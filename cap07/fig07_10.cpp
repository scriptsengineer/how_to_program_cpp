#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main() {
	const int array_size = 6;
	int frequency[array_size] = { 0 };
	srand(time(0));

	for (int roll = 0; roll < 6000000; roll++) {
		frequency[rand() % 6]++;
	}

	cout << "Face" << setw(13) << "Frequency" << endl;

	for (int face = 0; face < array_size; face++) {
        int face_view = face + 1;
		cout << setw(4) << face_view << setw(13) << frequency[face] << endl;
	}

	return 0;
}