#include <iostream>
using std::cout;
using std::endl;

void static_array_init(void);
void automatic_array_init(void);

int main() {
	cout << "First call to each function: \n";
	static_array_init();
	automatic_array_init();

    cout << "\n\nSecond call to each function: \n";
	static_array_init();
	automatic_array_init();

    cout << endl;
    return 0;
}

void static_array_init() {
    static int array1[3];
    cout << "\nValues on entering static_array_init:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "array1[" << i << "] = " << array1[i] << " ";
    }

    cout << "\nValues on exiting static_array_init:\n";
    for (int j = 0; j < 3; j++)
    {
        cout << "array1[" << j << "] = " << ( array1[j] += 5  ) << " ";
    }
}

void automatic_array_init() {
    int array1[3] = { 1, 2, 3 };
    cout << "\nValues on entering automatic_array_init:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "array1[" << i << "] = " << array1[i] << " ";
    }

    cout << "\nValues on exiting automatic_array_init:\n";
    for (int j = 0; j < 3; j++)
    {
        cout << "array1[" << j << "] = " << ( array1[j] += 5  ) << " ";
    }
}