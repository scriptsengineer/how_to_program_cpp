#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modify_array(int[], int);
void modify_element(int);

int main() {
	const int array_size = 5;
	int a[array_size] = { 0, 1, 2, 3, 4 };

	cout << "Effects of passing entire array by reference:"
		 << "\n\nThe values of the original array are:\n";

	for (int i = 0; i < array_size; i++) {
		cout << setw(3) << a[i];
	}

	cout << endl;

	modify_array(a, array_size);

	cout << "The values of the modified array are:\n";

	for (int j = 0; j < array_size; j++) {
		cout << setw(3) << a[j];
	}

	cout << "\n\nEffects of passing array element by value:"
		 << "\n\na[3] before modify_element: " << a[3] << endl;

	modify_element(a[3]);
	cout << "a[3] after modify_element: " << a[3] << endl;

	return 0;
}

void modify_array(int b[], int size_of_array) {
	for (int k = 0; k < size_of_array; k++) {
		b[k] *= 2;
	}
}

void modify_element(int e) {
	cout << "Value of element int modify_element:" << (e *= 2) << endl;
}