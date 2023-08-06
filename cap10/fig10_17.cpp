#include <iostream>
using std::cout;
using std::endl;

class Test {
public:
	Test(int = 0);
	void print() const;
private:
	int x;
};

Test::Test(int value)
: x(value)
{

}

void Test::print() const
{
    cout << "        x = " << x << endl;

    cout << "  this->x = " << this->x << endl;

    cout << "(*this).x = " << (*this).x << endl;
}

int main() 
{
    Test test_object(12);
    test_object.print();
    return 0;
}