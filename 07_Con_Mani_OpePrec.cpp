#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 34;
    cout << "the value of a is " << a << "\n";
    a = 45;
    cout << "the value of a is " << a << "\n";

    // Constant
    const int b = 11; // read only variable cannot be change like a
    cout << "the value of a is " << b << "\n";
    // b=32; // Error

    // Manipulation
    int c = 3, d = 78, e = 12345;
    cout << "the value of c is " << setw(4) << c << "\n"; // ___3
    cout << "the value of d is " << setw(4) << d << "\n"; // __78
    cout << "the value of e is " << setw(4) << e << "\n"; // 12345

    // Operation Precedence
    int x = 3, y = 4;
    int z = ((((x * 5) + y) - 45) + (87 / 2));
    cout << z;
    return 0;
}