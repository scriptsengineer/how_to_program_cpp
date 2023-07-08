#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	const int array_size = 10;

	int data[array_size] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };

	int insert;

	cout << "Unsorted array:\n";

	for (int i = 0; i < array_size; i++) {
		cout << setw(4) << data[i];
	}

    for(int next = 1; next < array_size; next++)
    {
        insert = data[next];

        int move_item = next;

        while((move_item > 0) && (data[move_item - 1] > insert)) {
            data[move_item] = data[move_item - 1];
            move_item--;
        }

        data[move_item] = insert;
    }

    cout << "\nSorted array:\n";

    for (int i = 0; i < array_size; i++)
    {
        cout << setw(4) << data[i];
    }

    cout << endl;
    return 0;
    
}