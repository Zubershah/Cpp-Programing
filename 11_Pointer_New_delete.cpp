#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;
    int **c = &b;

    cout << "the address of a is " << &a << "\n";
    cout << "the address of a is " << b << "\n";
    cout << "the address of a is " << *c << "\n";

    cout << "\nthe address of b is " << &b << "\n";
    cout << "the address of b is " << c << "\n";

    cout << "\nthe address of c is " << &c << "\n";

    cout << "\nthe value of a is " << a << "\n";
    cout << "the value of a is " << *b << "\n";
    cout << "the value of a is " << **(&b) << "\n";
    cout << "the value of a is " << ***(&c) << "\n";

    /*new operator*/
    int *p = new int(40); // pointer p is pointing to a dynamically allocated integer value 40
    cout << "\nthe value at address p is " << *(p) << endl;
    cout << "the address of p is " << p << endl;
    delete p; // delete operator

    int *arr = new int[3]; // dynamic allocates an array of 3 integer data type and points the pointer to its first element.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "\nthe value of arr[0] is " << arr[0] << endl;
    cout << "the value of arr[1] is " << arr[1] << endl;
    cout << "the value of arr[2] is " << arr[2] << endl;
    delete[] arr;
    return 0;
}