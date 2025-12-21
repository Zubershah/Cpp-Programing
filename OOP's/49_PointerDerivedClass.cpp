#include <iostream>
using namespace std;
class base
{
public:
    int var;
    void display()
    {
        cout << "display the base class variable " << var << endl;
    }
};
class derived : public base
{
public:
    int varDerived;
    void display()
    {
        cout << "display the derived class variable " << varDerived << endl;
        cout << "display the base class variable " << var << endl;
    }
};
int main()
{
    // base *ptr;
    // derived objderived;
    // ptr = &objderived;
    // ptr->var = 57;
    // ptr->display();

    /*
    pointer is base class.
    we cannot set dervied class int varderived; nor display function
    */

    derived objderived;
    derived *ptr1;
    ptr1 = &objderived;
    ptr1->varDerived = 8;
    ptr1->var = 6;
    ptr1->display();
    return 0;
}