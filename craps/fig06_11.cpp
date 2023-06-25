#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int roll_dice();

int main() {
	enum Status { CONTINUE,
		WON,
		LOST };
	int my_point;
	Status game_status;

	srand(time(0));

	int sum_of_dice = roll_dice();

	switch (sum_of_dice) {
		case 7:
		case 11:
			game_status = WON;
			break;

		case 2:
		case 3:
		case 12:
			game_status = LOST;
			break;

		default:
			game_status = CONTINUE;
			break;
	}

    while(game_status == CONTINUE) {
        sum_of_dice = roll_dice();

        if (sum_of_dice == my_point) {
            game_status = WON;
        }else if (sum_of_dice == 7){
            game_status = LOST;
        }
    }

    if(game_status == WON) {
        cout << "Player wins!" << endl;
    } else {
        cout << "Player loses!" << endl;
    }
}

int roll_dice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;

    int sum  = die1 + die2;

    cout << "Player rolled " << die1 << " + " << die2
    << " = " << sum << endl;
    return sum;
}