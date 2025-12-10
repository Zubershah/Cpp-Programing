#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int, int, int); // Declaration
    void getdata()
    {
        /*
        Purpose: It prints out all the values. Because this function is part of the class
        it is allowed to see the private variables (a, b, c) and the public ones (d, e).

        You cannot have action code (like cout) floating freely inside a class.
        It must be inside a function.
        */
        cout << "the value of a is " << a << "\n";
        cout << "the value of b is " << b << "\n";
        cout << "the value of c is " << c << "\n";
        cout << "the value of d is " << d << "\n";
        cout << "the value of e is " << e << "\n";
    }
    
};

void employee ::setdata(int a1, int b1, int c1)
/*
:: This is called the Scope Resolution Operator.
setdata is defined outside the curly braces of the class.
we use employee :: to tell the compiler

Purpose: Since main() cannot touch private a, b, or c
it uses this public function to pass values into them safely.
 */
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee zooby; // object created ----> zooby
    /*
    zooby.a = 45;
    Variables a, b, and c are private.
    This means only functions inside this class can touch them.
    The main() function cannot access them directly.
    This is for security and data protection.
    */
    zooby.d = 34;
    zooby.e = 89;
    /*
    Variables d and e are public.
    Anyone (including the main function) can change these directly.
    */
    zooby.setdata(1, 2, 4);
    zooby.getdata();
    return 0;
}