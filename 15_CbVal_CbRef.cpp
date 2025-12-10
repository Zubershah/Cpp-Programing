#include <iostream>
using namespace std;
// void swap(int, int); // call by avlue
// void swap(int *, int *); // call by reference
void swap(int &, int &); // reference variable
int main()
{
    int num1 = 5, num2 = 6;
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    // swap(num1, num2); // call by value
    // swap(&num1, &num2); // call by reference
    swap(num1, num2); // refernce variable
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    return 0;
}

/*
Call by Value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
*/

/*
 Call by Reference
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/

//  reference variable
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}