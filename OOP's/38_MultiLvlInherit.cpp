#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class student
{
protected:
    int rollnum;

public:
    void setrollnum(int);
    void getrollnum(void);
};
/******************************************************** */
void student ::setrollnum(int r)
{
    rollnum = r;
}
void student ::getrollnum()
{
    cout << "the roll number is " << rollnum << endl;
}
/////////////////////////////////////////////////////////////
class exam : public student
{
protected:
    float maths, physics;

public:
    void setmarks(float, float);
    void getmarks();
};
/********************************************************* */
void exam ::setmarks(float m, float p)
{
    maths = m;
    physics = p;
}
void exam ::getmarks()
{
    cout << "the marks in mathematics is " << maths << endl;
    cout << "the marks in physics is " << physics << endl;
}
/////////////////////////////////////////////////////////////
class result : public exam
{
public:
    void display()
    {
        getrollnum();
        getmarks();
        cout << "your rollnumber is " << rollnum << " and result is " << ((maths + physics) / 2) << "%" << endl;
    }
};
///////////////////////////////////////////////////////////////
int main()
{
    result zooby;
    zooby.setrollnum(420);
    zooby.setmarks(52.0, 98.5);
    zooby.display();
    return 0;
}