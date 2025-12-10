#include <iostream>
using namespace std;
////////////////////////////////////////////////
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}
/////////////////////////////////////////////////
class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    // setdata();  // if derived class visibility is private
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "value of data 1 is " << getdata1()
         << ", data 2 is " << data2
         << ", and data 3 is " << data3 << endl;
}
int main()
{
    derived der;
    der.setdata(); // base class public member --> setdata();
    /*
    if the derived class visibility is private
    then setdata(); will be private and can't be invoked in main function
    */
    der.process();
    der.display();
    return 0;
}