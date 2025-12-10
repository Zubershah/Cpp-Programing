#include <iostream>
int main()
{
    int num1, num2;
    std::cout << "enter the value of num1\n";
    std::cin >> num1; // >> is a extraction operator
    std::cout << "enter the value of num2\n";
    std::cin >> num2;
    std::cout << "the sum of num1 and num2 is " << num1 + num2 << "\n";

    return 0;
}