#include "client_data.h"

#include <string>
using std::string;


ClientData::ClientData(int account_number, string last_name, string first_name, double balance) {
    set_account_number(account_number);
    set_last_name(last_name);
    set_first_name(first_name);
    set_balance(balance);
}

void ClientData::set_account_number(int account) {
    this->account_number = account;
}

int ClientData::get_account_number() const {
	return account_number;
}

void ClientData::set_last_name(string last_name_string) {
    const char *last_name_value = last_name_string.data();
    int length = last_name_string.size();
    length = (length < 15 ? length : 14);
    strncpy(last_name, last_name_value, length);
    last_name[length] = '\0';
}

string ClientData::get_last_name() const {
	return last_name;
}

void ClientData::set_first_name(string first_name_string) {
    const char *first_name_value = first_name_string.data();
    int length = first_name_string.size();
    length = (length < 15 ? length : 14);
    strncpy(first_name, first_name_value, length);
    first_name[length] = '\0';
}

string ClientData::get_first_name() const {
	return first_name;
}

void ClientData::set_balance(double b) {
    balance = b;
}

double ClientData::get_balance() const {
	return balance;
}
