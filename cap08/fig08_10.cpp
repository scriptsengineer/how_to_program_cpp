#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::toupper;

void convert_to_uppercase(char *);

int main() {
    char phrase[] = "characters and $32.98";

    cout << "The phrase before conversion is: " << phrase;
    convert_to_uppercase(phrase);
    cout << "\nThe phrase after conversion is: " << phrase;
    return 0;
}

void convert_to_uppercase(char *sPrt) {
    while( *sPrt != '\0') {
        if(islower(*sPrt)) {
            *sPrt = toupper(*sPrt);
        }
        sPrt++;
    }
}