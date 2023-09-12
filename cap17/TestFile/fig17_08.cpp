#include <iostream>
using std::cerr;
using std::cin;
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

enum RequestType { ZERO_BALANCE = 1,
	CREDIT_BALANCE,
	DEBIT_BALANCE,
	END };

int get_request();

bool should_display(int, double);

void output_line(int, const string, double);

int main() {
	ifstream in_client_file("clients.dat", ios::in);

	if (!in_client_file) {
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	int request;
	int account;
	char name[30];
	double balance;

	request = get_request();

	while (request != END) {
		switch (request) {
			case ZERO_BALANCE:
				cout << "\nAccounts with zero balances:\n";
				break;
			case CREDIT_BALANCE:
				cout << "\nAccounts with credit balances:\n";
				break;
			case DEBIT_BALANCE:
				cout << "\nAccounts with debit balances:\n";
				break;
		}

		in_client_file >> account >> name >> balance;

		while (!in_client_file.eof()) {
			if (should_display(request, balance))
				output_line(account, name, balance);

			in_client_file >> account >> name >> balance;
		}

		in_client_file.clear();
		in_client_file.seekg(0);
		request = get_request();
	}

	cout << "End of run." << endl;
	return 0;
}

int get_request() {
	int request;

	cout << "\nEnter request" << endl
		 << " 1 - List accounts with zero balances" << endl
		 << " 2 - List accounts with credit balances" << endl
		 << " 3 - List accounts with debit balances" << endl
		 << " 4 - End of run" << fixed << showpoint;

	do {
		cout << "\n?";
		cin >> request;
	} while (request < ZERO_BALANCE || request > END);

    return request;
}


bool should_display(int type, double balance)
{
    return (type == ZERO_BALANCE && balance == 0) ||
    (type == CREDIT_BALANCE && balance < 0) ||
    (type == DEBIT_BALANCE && balance > 0);
}

void output_line(int account, const string name, double balance) {
	cout << left << setw(10) << account << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;
}