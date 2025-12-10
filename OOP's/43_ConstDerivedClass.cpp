/*
case 1:
class B : public A
{
// order of execution of constructor ---> A then B
};

case 2:
class A : public B, public C
{
// order of execution of constructor ---> B,C,and A
};

case 2:
class A : public B, virtual public C
{
// order of execution of constructor ---> C,B, and A
};
*/
#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base 1 class constructor is called" << endl;
    }
    void printdata1()
    {
        cout << "the value of data 1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int j)
    {
        data2 = j;
        cout << "base 2 class constructor is called" << endl;
    }
    void printdata2()
    {
        cout << "the value of data 2 is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int der1, der2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "derived class constructor is called" << endl;
    }
    void printder()
    {
        cout << "the value of derived 1 is " << der1
             << " the value of derived 2 is " << der2 << endl;
    }
};
int main()
{
    derived zooby(1, 2, 3, 4);
    zooby.printdata1();
    zooby.printdata2();
    zooby.printder();
    return 0;
}