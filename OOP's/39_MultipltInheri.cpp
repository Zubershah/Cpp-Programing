#include <iostream>
using namespace std;
/*
synatx ---> multiple inheritance
class derived-name : visibility-mode base class 1-name, visibility-mode base class 2-name, and so on....
{
derived class body
};
*/
class base1
{
protected:
    int a;

public:
    void geta(int n)
    {
        a = n;
    }
};
class base2
{
protected:
    int b;

public:
    void getb(int m)
    {
        b = m;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base 1 is " << a << " and value of base 2 is " << b << endl;
        cout << "the sum of base 1 and base 2 is " << a + b << endl;
    }
};
int main()
{
    derived zooby;
    zooby.geta(10);
    zooby.getb(20);
    zooby.show();

    return 0;
}