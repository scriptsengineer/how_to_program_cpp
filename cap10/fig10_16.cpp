#include <iostream>
using std::cout;
using std::endl;

class Count {
public:
	Count() :
			x(0) {
	}
    void print() const {
        cout << x << endl;
    }
    private:
    int x;
};

void cannotSetX(Count &c, int val)
{
    //c.x = val;
}
