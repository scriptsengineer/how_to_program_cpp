#include <iostream>
using std::cout;
using std::endl;

#include <exception>
using std::exception;

void throw_exception()
{
    try
    {
        cout << " Function throw_exception throws an exception\n";
        throw exception();
    }
    catch(const exception &)
    {
        cout << " Exception handled in function throw_exception"
        << "\n Function throw_exception rethrows exception";
        throw;
    }

    cout << "This also should not print\n";
    
}

int main()
{
    try
    {
        cout << "\nmain invokes function throw_exception\n";
        throw_exception();
        cout << "This should not print\n";
    }
    catch(const exception& )
    {
        cout << "\n\nException handled in main\n";
    }

    cout << "Program control continues after catch in main\n";
    return 0;
    
}