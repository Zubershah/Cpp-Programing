/*
ther are two types of header file

1. system header file
----> #include<iostream.h>

2. used defined header file
----> #include"name.h"
this will produce an error if name.h is not present in the current directory
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 2;

    cout << "Arthimetic Operator's \n";
    cout << "the value of a+b is " << a + b << "\n"; // 7
    cout << "the value of a-b is " << a - b << "\n"; // 3
    cout << "the value of a*b is " << a * b << "\n"; // 10
    cout << "the value of a/b is " << a / b << "\n"; // 2
    cout << "the value of a%b is " << a % b << "\n"; // 1
    cout << "the value of a++ is " << a++ << "\n";   // 5
    cout << "the value of a-- is " << a-- << "\n";   // 6
    cout << "the value of ++a is " << ++a << "\n";   // 6
    cout << "the value of --a is " << --a << "\n";   // 5
    cout << "\n";

    /*
    assignment operator
    int i = 5;
    float f = 34.34;
    char ch = 'f';
    */

    cout << "comparision Operator's \n";
    cout << "the value of a == b is " << (a == b) << "\n"; // 0
    cout << "the value of a != b is " << (a != b) << "\n"; // 1
    cout << "the value of a > b is " << (a > b) << "\n";   // 1
    cout << "the value of a < b is " << (a < b) << "\n";   // 0
    cout << "the value of a >= b is " << (a >= b) << "\n"; // 1
    cout << "the value of a <= b is " << (a <= b) << "\n"; // 0
    cout << "\n";

    int c = 5, d = 0;
    cout << "logical Operator's \n";
    cout << "the value of c && d is " << (c && d) << "\n"; // 0
    cout << "the value of c || d is " << (c || d) << "\n"; // 1
    cout << "the value of !c is " << (!c) << "\n";         // 0

    return 0;
}