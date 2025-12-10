#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////
class student
{
protected:
    int rollnum;

public:
    void setrollnum(int n)
    {
        rollnum = n;
    }
    void printrollnum()
    {
        cout << "you roll number is " << rollnum << endl;
    }
};
///////////////////////////////////////////////////////////////
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void printmarks()
    {
        cout << "your mathematics score is " << maths
             << " & physics score is " << physics << endl;
    }
};
//////////////////////////////////////////////////////////////
class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float s)
    {
        score = s;
    }
    void printscore()
    {
        cout << "your sports score is " << score << endl;
    }
};
////////////////////////////////////////////////////////////
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = (maths + physics + score);
        printrollnum();
        printmarks();
        printscore();
        cout << "the total marks is " << total << " out of 300" << endl;
        cout << "percentage is " << total / 3 << "%" << endl;
    }
};
int main()
{
    result check;
    check.setrollnum(420);
    check.setmarks(81, 87);
    check.setscore(90);
    check.display();
    return 0;
}