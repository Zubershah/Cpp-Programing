#include <iostream>
using namespace std;
class complex
{
    int a, b;
    // Declare entire class as a friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "your number is " << a << " +-i" << b << endl;
    }
};

class calculator
{
public:
    int sumcomplex(complex, complex);
    int imagsumcomplex(complex, complex);
};

int calculator ::sumcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator ::imagsumcomplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 2);
    o2.setnumber(5, 7);
    o1.print();
    o2.print();

    calculator calc;

    int res = calc.sumcomplex(o1, o2);
    cout << "the sum of real parts are " << res << endl;

    int resim = calc.imagsumcomplex(o1, o2);
    cout << "the sum of imaginary parts are +-i" << resim << endl;
    return 0;
}