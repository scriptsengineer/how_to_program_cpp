#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

void selection_sort(int [], const int, bool (*)(int, int));
void swap(int* const, int * const);
bool ascending(int, int);
bool descending(int, int);

int main() {
    const int array_size = 10;
    int counter = 0;
    int order;
    int a[array_size] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Enter 1 to sort in asceding order,\n"
    << "Enter 2 to sort in descending order:";
    cin >> order;
    cout << "\nData items in original order\n";

    for (counter = 0; counter < array_size; counter++)
    {
        cout << setw(4) << a[counter];
    }

    if(order == 1){
        selection_sort(a, array_size, ascending);
        cout << "\nData items in asceding order\n";
    }
    else {
        selection_sort(a, array_size, descending);
        cout << "\nData items in descending order\n";
    }

    for (counter = 0; counter < array_size; counter++)
    {
        cout << setw(4) << a[counter];
    }

    cout << endl;
    return 0;
    
    
}

void selection_sort(int work[], const int size, bool(*compare)(int, int)) {
    int smallest_or_largest;
    for (int i = 0; i < size; i++)
    {
        smallest_or_largest = i;
        for (int index = i + 1; index < size; index++)
        {
            if(!(*compare)(work[smallest_or_largest], work[index])){
                smallest_or_largest = index;
            }
        }

        swap(&work[smallest_or_largest], &work[i]);
        
    }
}

void swap(int * const element1Ptr, int * const element2Ptr){
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}


bool ascending(int a, int b) {
    return a < b;
}

bool descending(int a, int b){
    return a > b;
}