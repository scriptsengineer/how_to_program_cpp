#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int line_search(const int[], int, int);

int main() {
    const int array_size = 100;
    int a[array_size];
    int search_key;

    for (int i = 0; i < array_size; i++)
    {
        a[i] = 2 * i;
    }

    cout << "Enter integer search key: ";
    cin >> search_key;

    int element = line_search(a, search_key, array_size);

    if(element != -1 ) {
        cout << "Found value in element " << element << endl;
    }else {
        cout << "Value not found" << endl;
    }

    return 0;
    
}

int linear_search(const int array[], int key, int size_of_array) {
    for (int j = 0; j < size_of_array; j++)
    {
        if(array[j] == key) {
            return j;
        }
    }
    return -1;
}