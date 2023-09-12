#ifndef CLIENTDATA_H
#define CLIENTDATA_H

#include <string>
using std::string;

class ClientData {
public:
	ClientData(int = 0, string = "", string = "", double = 0.0);

	void set_account_number(int);
	int get_account_number() const;

	void set_last_name(string);
	string get_last_name() const;

	void set_first_name(string);
	string get_first_name() const;

	void set_balance(double);
	double get_balance() const;

private:
	int account_number;
	char last_name[15];
    char first_name[10];
    double balance;
};

#endif