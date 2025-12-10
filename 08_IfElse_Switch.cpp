#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "tell me your age\n";
    cin >> age;

    /*
    if (age < 18 && age > 0)
    {
        cout << "you cannot come to party\n";
    }
    else if (age == 18)
    {
        cout << "you can come to party\n";
    }
    else if (age <= 0)
    {
        cout << "you are not yet born\n";
    }
    else
    {
        cout << "you are always welcome to party\n";
    }
    */

    switch (age)
    {
    case 18:
        cout << "your age is 18 and you are welcome to party\n";
        break;
    case 25:
        cout << "your age is 23 and you must come to party\n";
        break;
    case 45:
        cout << "your age is 45 and you are always welcome to party\n";
        break;
    default:
        cout << "enter the age either 18, 23, or 45\n";
    }
    return 0;
}