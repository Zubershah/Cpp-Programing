#include <iostream>
using namespace std;
/*
Function Overloading is a feature in C++
where two or more functions can have the same name but different parameters.

You cannot overload functions just by changing the return type.
int test(int a)
void test(int a)
*/
int add(int a, float b)
{
    cout << "using 2 arguments" << endl;
    return a + b;
}
int add(int a, int b, int c)
{
    cout << "using 3 arguments" << endl;
    return a + b + c;
}
int main()
{
    cout << "the sum of 3 and 6 is " << add(3, 6.0) << endl;
    cout << "the sum of 3, 6, and 9 is " << add(3, 6, 9) << endl;
    return 0;
}
