#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"
int main()
{
    Time t;

    cout << "The intitial universal time is ";
    t.print_universal();
    cout << "\nThe initial standard time is ";
    t.print_standard();

    t.set_time(13,27,6);

    cout << "Universal time after set_time is ";
    t.print_universal();
    cout << endl;
    cout << "Standard time after set_time is ";
    t.print_standard();

    t.set_time(99,99,99);

    cout << "-> Try attempting invalid settings" << endl;
    cout << "Universal time:";
    t.print_universal();
    cout << endl;
    cout << "Standard time:";
    t.print_standard();

    cout << endl;

    return 0;
}