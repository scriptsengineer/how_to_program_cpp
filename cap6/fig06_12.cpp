#include <iostream>
using std::cout;
using std::endl;

void use_local(void);
void use_static_local(void);
void use_global(void);

int x = 1;

int main(){
    int x = 5;
    cout << "local x in main's outer scope is " << x << endl;

    {
        int x = 7;
        cout << "local x in main's inner scoper is " << x << endl;
    }

    cout << "local x in main's outer scope is " << x << endl;

    use_local();
    use_static_local();
    use_global();
    use_local();
    use_static_local();
    use_global();

    cout << "\nlocal in main is " << x << endl;
    return 0;
}

void use_local(void) {
    int x = 25;
    cout << "\nlocal x is " << x << " on entering use_local" << endl;
    x++;
    cout << "local x is " << x << " on exiting use_local" << endl;
}

void use_static_local(void) {
    static int x = 50;
    cout << "\nlocal static x is " << x << " on entering use_static_local" << endl;
    x++;
    cout << "\nlocal static x is " << x << " on exiting use_static_local" << endl;
}

void use_global(void){
    cout << "\nglobal x is " << x << " on entering use_global" << endl;
    x *= 10;
    cout << "\nglobal x is " << x << " on entering use_global" << endl;
}




