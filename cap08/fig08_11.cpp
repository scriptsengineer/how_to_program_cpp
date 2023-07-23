#include <iostream>
using std::cout;
using std::endl;

void print_characters(const char *);

int main() {
	const char phrase[] = "print characters of a string";
	cout << "The string is:\n";
	print_characters(phrase);
	cout << endl;
	return 0;
}

void print_characters(const char *sPtr) {
	for (; *sPtr != '\0'; sPtr++) {
		cout << *sPtr;
	}
}