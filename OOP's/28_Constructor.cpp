#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    /*
    constructor creation
    constructor is a special member function with the same name as of the class.
    it is used to initialize the objects of it's class.
    it is automatically invoked whenever an object is created
    */
    complex(); // constructor declaration
    void print()
    {
        cout << "your number " << a << " +-i" << b << endl;
    }
};
complex ::complex(void)
{
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.print();
    return 0;                           
}