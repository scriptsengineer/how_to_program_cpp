#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void function0(int);
void function1(int);
void function2(int);

int main() {
    void(*f[3])(int) = { function0, function1, function2};

    int choice;
    cout << "Enter a number between 0 and 2, 3 to end:";
    cin >> choice;

    while((choice>= 0) && (choice < 3)){
        (*f[choice])(choice);

        cout << "Enter a number between 0 and 2, 3 to end:";
        cin >> choice;
    }

    return 0;
}

void function0(int a){
    cout << "Function 0" << endl;
}

void function1(int a){
    cout << "Function 1" << endl;
}

void function2(int a){
    cout << "Function 2" << endl;
}