#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

#include <fstream>
using std::ifstream;

#include <iomanip>
using std::setprecision;
using std::setw;

#include <string>
using std::string;

#include <cstdlib>
using std::exit;

void output_line(int, const string, double);

int main() {
	ifstream in_client_file("clients.dat", ios::in);

	if (!in_client_file) {
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	int account;
	char name[30];
	double balance;

	cout << left << setw(10) << "Account" << setw(13) << "Name"
		 << "Balance" << endl
		 << fixed << showpoint;

	while (in_client_file >> account >> name >> balance) {
		output_line(account, name, balance);
	}
	return 0;
}

void output_line(int account, const string name, double balance) {
    cout << left << setw(10) << account << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;
}