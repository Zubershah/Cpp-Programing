#include <iostream>
using namespace std;
int c = 57;
int main()
{

    int a, b, c;
    cout << "enter the value of a:" << "\n";
    cin >> a;
    cout << "enter the value of b:" << "\n";
    cin >> b;
    c = a + b;
    cout << "the value of c is: " << c << "\n";
    cout << "the value of c is: " << ::c << "\n"; // global variable

    // Literals
    float d = 34.5f;       // specifing that it is a float number
    long double e = 34.4l; // specifing that it is a long double number
    cout << "the value of d is " << d << "\n";
    cout << "the value of e is " << e << "\n";

    cout << "the size of 34.4 is " << sizeof(34.4) << "\n";
    cout << "the size of 34.4f is " << sizeof(34.4f) << "\n";
    cout << "the size of 34.4F is " << sizeof(34.4F) << "\n";
    cout << "the size of 34.4l is " << sizeof(34.4l) << "\n";
    cout << "the size of 34.4L is " << sizeof(34.4L) << "\n";

    // Reference variable
    float x = 455;
    float &y = x;
    cout << x << "\n";
    cout << y << "\n";
    y = 38;
    cout << x << "\n";
    cout << y << "\n";

    // Type Casting
    int f = 45;
    float g = 45.56;
    cout << "the value of f is " << float(f) << "\n";
    cout << "the value of g is " << int(g) << "\n";
    int h = g; // int c = int(g); this is also valid
    cout << "the value of h is " << h << "\n";

    cout << "the expression is " << f + g << "\n";
    cout << "the expression is " << f + int(g) << "\n";
    return 0;
}