#include <iostream>
using std::cout;
using std::endl;

void print_array(const int[][3]);

int main() {
	int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int array2[2][3] = { 1, 2, 3, 4, 5 };
	int array3[2][3] = { { 1, 2 }, { 4 } };

	cout << "Values in array1 by row are:" << endl;
	print_array(array1);

	cout << "Values in array2 by row are:" << endl;
	print_array(array2);

	cout << "Values in array3 by row are:" << endl;
	print_array(array3);
}

void print_array(const int a[][3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}