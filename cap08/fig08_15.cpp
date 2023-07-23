#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void selection_sort(int *const, const int);
void swap(int *const, int *const);

int main() {
	const int array_size = 10;
	int a[array_size] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Data items in original order\n";

    for (int i = 0; i < array_size; i++)
    {
        cout << setw(4) << a[i];
    }

    selection_sort(a, array_size);

    cout << "Data items in ascending order\n";

    for (int i = 0; i < array_size; i++)
    {
        cout << setw(4) << a[i];
    }

    cout << endl;
    return 0;
}

void selection_sort(int * const array, const int size) {
    int smallest;
    for (int i = 0; i < size - 1; i++)
    {
        smallest = i;
        for (int index = i + 1; index < size; index++)
        {
            if(array[index] < array[smallest])
            {
                smallest = index;
            }
        }

        swap(&array[i], &array[smallest]);
        
    }
    
}

void swap(int * const element1Ptr, int * const element2Ptr) {
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}