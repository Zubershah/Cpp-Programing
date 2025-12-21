#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number() // default constructor
    {
        a = 0;
    }
    number(int n)
    {
        a = n;
    }
    number(number &obj) // when no copy constructor is present, compiler supplies it's own copy constuctor
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    void display()

    {
        cout << "the number for this object is " << a << endl;
    }
};
int main()
{
    number x(1), y, z, z2; // for this type of object creation default constructor is mandatory
    x.display();
    y.display();

    z = number(56);
    z.display();

    number z1(x); // copy constuctor invoked
    z1.display();

    z2 = z; // copy constructor not invoked. Reason: object z2 is alraedy created
    z2.display();

    number z3 = y; // copy constructor invoked. Reason: new object z3 created
    z3.display();
    return 0;
}