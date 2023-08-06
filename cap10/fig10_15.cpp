#include <iostream>
using std::cout;
using std::endl;

class Count {
	friend void setX(Count &, int);

public:
	Count() :
			x(0) {}
	void print() const {
		cout << x << endl;
	}

private:
	int x;
};

void setX(Count &c, int val) {
	c.x = val;
}

int main() {
	Count counter;
    cout << "Counter.x after instatiation: ";
    counter.print();

    setX(counter, 8);
    cout << "Counter.x after call to setX friend function: ";
    counter.print();
    return 0;
}