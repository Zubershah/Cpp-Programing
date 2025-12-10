#include <iostream>
int V = 8; // global variable
void Scope()
{
    std::cout << "Scope function does't local variable " << V << "\n";
}
int main()
{
    int a = 4, b = 5;
    float pie = 3.14;
    char c = 'Z';
    bool d = true;
    std::cout << "the value of a is " << a << " and the value of b is " << b << "\n";
    std::cout << "the value of pie is " << pie << "\n";
    std::cout << "the character of c is " << c << "\n";
    std::cout << "the boolean value of d is " << d << "\n";

    int V = 9;
    /*
    local variable inside the function
    similarly global variable is created outside the function
    */
    Scope();
    std::cout << "the local variable value is " << V;
    return 0;
}