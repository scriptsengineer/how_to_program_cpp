#include <iostream>
using std::cout;
using std::endl;

int main()
{
    char *word = "again";

    cout << "Value of word is: " << word
    << "Value of static_cast<void*>(word) is" << static_cast<void*>(word) << endl;
    return 0;
}