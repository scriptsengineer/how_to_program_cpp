#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;

int main()
{
    ofstream out_client_file("clients.dat", ios::out);

    if(!out_client_file)
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }

    cout << "Enter the account, name , and balance." << endl
    << "Enter end-of-file to end input.\n";
    int account;
    char name[30];
    double balance;

    while(cin >> account >> name >> balance)
    {
        out_client_file << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }

    return 0;
}