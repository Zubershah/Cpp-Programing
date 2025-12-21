#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "I am fine" << endl;
    }
};
class derived : public base1, public base2
{
public:
    void greet()
    {
        base1::greet(); // ambiguity resolution tell the compiler to use base1 greet(); function
        /*
        another way of using is in main function
        ---> ob3.base1::greet();
        */
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////

class B
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};
class D : public B
{
public:
    //D class say() function will overwrite base class B say() function
    void say()
    {
        cout << "heyy world" << endl;
    }
};
int main()
{
    base1 ob1;
    base2 ob2;
    ob1.greet();
    ob2.greet();
    derived ob3;
    ob3.greet(); // base1 and base2 members are public visibility and it will confuse which one to compile
    // ob3.base1::greet();

    B b;
    b.say();
    D d;
    d.say();
    return 0;
}