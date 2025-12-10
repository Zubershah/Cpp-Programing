#include <iostream>
using namespace std;
/*
The compiler takes the body of the function and essentially "copy-pastes" it directly into the line where it was called.
This eliminates the jump and the overhead.
Loop-----> X
Static----> X
Simple function ------> Use

inline int product(int x, int y)
{
    return x * y;
}
*/

int product(int x, int y)
{
    static int c = 0; // this execute only once
    c = c + 1;        // if function called again the value of c will be reatined;
    return x * y + c;
}
int main()
{
    int a, b;
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    return 0;
}

// // Default Arguments
// #include <iostream>
// using namespace std;
// float moneyrec(int Curmoney, float factor = 1.04) // factor 1.04 is a default arguments
// {
//     return Curmoney * factor;
// }
// int main()
// {
//     int money = 25000;
//     cout << "if you have Rs. "
//          << money << " /- in your bank you will receive Rs. "
//          << moneyrec(money) << " /- after 1 year" << endl; // factor value is missing it will take default value
//     cout << "if VIP have Rs. "
//          << money << " /- in your bank you will receive Rs. "
//          << moneyrec(money, 1.20) << " /- after 1 year" << endl;
//     return 0;
// }
