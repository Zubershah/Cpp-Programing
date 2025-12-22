#include <iostream>
using namespace std;
// float function(int a, int b)
// {
//     return ((a + b) / 2.0);
// }
// float function(int a, float b)
// {
//     return ((a + b) / 2);
// }

template <class T1, class T2>
float function(T1 a, T2 b)
{
    return ((a + b) / 2.0);
}

template <class Z>
void swapp(Z &a, Z &b)
{
    Z temp = a;
    a = b;
    b = temp;
}

int main()
{
    // float answer;
    // answer = function(5, 2);
    // cout << "the answer is " << answer << endl;
    // answer = function(5, 2.5f);
    // cout << "the answer is " << answer << endl;

    float answer;
    answer = function(5.7, 2.5);
    cout << "the answer is " << answer << endl;

    float x = 45.5, y = 5.75;
    swapp(x, y);
    cout << x << endl
         << y << endl;

    int x1 = 4, y1 = 5;
    swapp(x1, y1);
    cout << x1 << endl
         << y1;

    return 0;
}