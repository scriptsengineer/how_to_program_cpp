// Test
#include <iostream>

int main() {
	std::cout << "Welcome to C++\n";

	int number1;
	int number2;
	int sum;

	std::cout << "Enter Number 1:";
	std::cin >> number1;

	std::cout << "Enter Number 2:";
	std::cin >> number2;

	sum = number1 + number2;

	std::cout << "Sum is " << sum;

	return 0;
}