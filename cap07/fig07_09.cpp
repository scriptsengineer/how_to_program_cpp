#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
    const int array_size = 11;
    int n[array_size] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2 };

    cout << "Grade Distribution";

    for (int i = 0; i < array_size; i++)
    {
        cout << i << ":";

        for (int j = 0; j < n[i]; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    
}