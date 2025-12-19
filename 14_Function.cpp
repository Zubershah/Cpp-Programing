#include <iostream>
using namespace std;
int sum(int, int);
int sum(int a, int b) // formal parameter (i.e. a & b)
{
    int c = a + b;
    return c;
}
void display(); // function prototype
int main()
{
    int num1, num2; // actual parameter
    cout << "enter the first number" << endl;
    cin >> num1;
    cout << "enter the second number" << endl;
    cin >> num2;
    cout << "the sum of num1 and num2 is " << sum(num1, num2) << endl;

    display();
    return 0;
}
void display() // function execution
{
    cout << "display function is working and not return any value in void type" << endl;
}