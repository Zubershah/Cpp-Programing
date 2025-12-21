#include <iostream>
using namespace std;
class complex
{
    int a, b;

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

    friend complex sumcomplex(complex, complex); // providing access to private data; can be written in private or public.
};
complex sumcomplex(complex o1, complex o2) // friend function is not a scope of class
{
    complex o3;
    o3.setnumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c2.setnumber(5, 8);
    sum = sumcomplex(c1, c2); // sum.sumcomplex(c1,c2); is invalid Reason: sumcomplex() is not a part of class
    c1.print();
    c2.print();
    sum.print();
    return 0;
}