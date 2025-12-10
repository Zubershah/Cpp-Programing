#include <iostream>
using namespace std;
class simple
{
    int data1, data2;

public:
    simple(int a, int b = 5)
    {
        data1 = a;
        data2 = b;
    }
    void print()
    {
        cout << "the number is " << data1 << " & " << data2 << endl;
    }
};
int main()
{
    simple Ob(1);
    Ob.print();
    return 0;
}