#include <iostream>
using std::cerr;
using std::endl;
using std::ios;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;

#include "client_data.h"

int main()
{
    ofstream out_credit("credit.dat", ios::binary);

    if(!out_credit)
    {
        cerr << "File could not be opened." << endl;
        exit(1);
    }

    ClientData blank_client;

    for(int i = 0; i < 100; i++)
    {
        out_credit.write(reinterpret_cast<const char*>(&blank_client), sizeof(ClientData));
    }

    return 0;
}