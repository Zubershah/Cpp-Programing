#include <iostream>
using namespace std;
/*
Syntax:
constructor (arguments) : initialization-section
{
// body
}

example:
class test
{
int a,b;
public:
    test (int i, int j) : a(i),b(j)
        {
        // body
        }
};
*/
class test
{
    int a, b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(j), b(i)
    // test(int i, int j) : a(j), b(i+j)
    // test(int i, int j) : a(j), b(i * j)
    // test(int i, int j) : a(j), b(a * j)
    // test(int i, int j) : b(j), a(i + b) // b=6 a=garbage value; Reason: a initialized first
    test(int i, int j) : a(i)
    {
        b = j;
        cout << "constructor executed" << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};
int main()
{
    test t(4, 6);
    return 0;
}