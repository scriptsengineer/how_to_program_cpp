#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	const int response_size = 40;
	const int frequency_size = 10;

	const int responses[response_size] = { 1, 2, 6, 4, 8, 5, 9, 7, 8,
		10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
		5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

	int frequency[frequency_size] = { 0 };

	for (int answer = 0; answer < response_size; answer++) {
		frequency[responses[answer] - 1]++;
	}

    cout << "Rating" << setw(17) << "Frequency" << endl;

    for (int rating = 0; rating < frequency_size; rating++)
    {
        cout << setw(6) << rating << setw(16) << frequency[rating] << endl;
    }
    
	return 0;
}