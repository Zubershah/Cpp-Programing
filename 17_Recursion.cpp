// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }

//     return factorial(n - 1) * n;
// }
// int main()
// {
//     int n;
//     cout << "enter the number" << endl;
//     cin >> n;
//     cout << "factorial of " << n << " is " << factorial(n) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "enter the number\n";
    cin >> n;
    cout << "the fibonacci of " << n << " is " << fibonacci(n) << endl;

    return 0;
}