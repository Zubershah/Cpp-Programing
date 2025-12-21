/*
create 2 classes
1. simple calculator--->take 2 input, perform   + - * / and display the result
2. scientific calculator--->take 2 input, perofrm any 4 scientific operation and display the result

create another class hybridcalculator and inherit it using above 2 classes
Q1. what type of inherit are you using  ---> Multiple
Q2. which mode of inherit are you using ---> Private
Q3. create an object of hybridcalculator and display result of simple and scientific calculator
Q4. how is code reusability implemented
*/
#include <iostream>
#include <math.h>
using namespace std;

class simplecal
{
    float a, b;

public:
    void setsimplecal()
    {
        cout << "enter the value of a for simple calculator" << endl;
        cin >> a;
        cout << "enter the value of b for simple calculator" << endl;
        cin >> b;
    }
    void dispsimplecal()
    {
        cout << "the addition of A & B is " << a + b << endl;
        cout << "the subtraction of A & B is " << a - b << endl;
        cout << "the multiplication of A & B is " << a * b << endl;
        cout << "the division of A & B is " << a / b << endl;
    }
};

class scientificCal
{
    float a1, b1;

public:
    void setscientificCal()
    {
        cout << "enter the value of a for scientific calculator" << endl;
        cin >> a1;
        cout << "enter the value of b for scientific calculator" << endl;
        cin >> b1;
    }
    void dispscientificCal()
    {
        cout << "the sq root of A + B is " << sqrt(a1 + b1) << endl;
        cout << "the sq of A  is " << pow(a1, 2) << endl;
        cout << "the cb root of A is " << cbrt(a1) << endl;
        cout << "the Cos of A is " << cos(a1) << endl;
    }
};
class hybridcalculator : simplecal, scientificCal
{
public:
    void setall()
    {
        setsimplecal();
        setscientificCal();
    }
    void display()
    {
        dispsimplecal();
        cout << endl;
        dispscientificCal();
    }
};
int main()
{
    hybridcalculator calcu;
    calcu.setall();
    calcu.display();

    return 0;
}