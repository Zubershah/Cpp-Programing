#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
        /*
        this is a keyword.
        which is used as a pointer to point to the object
        which invoke the member function
        */
    }
    void getdata()
    {
        cout << "the value of a is " << a << endl;
    }
};
int main()
{
    A Obj;
    Obj.setdata(4);
    Obj.getdata();
    return 0;
}