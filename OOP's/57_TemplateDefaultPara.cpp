#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class zooby
{
public:
    T1 a;
    T2 b;
    T3 c;
    zooby(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << "\n";
        cout << "the value of b is " << b << "\n";
        cout << "the value of c is " << c << "\n";
    }
};
int main()
{
    // zooby<> obj(4, 6.4, 'Z');
    // obj.display();

    zooby<> obj(4, 'Z', 97);
    obj.display();
    /*
    the value of a is 4  // data type --> int; assigned --> int; output: int (i.e. 4)
    the value of b is 90 // data type --> float; assigned --> char; compiler convert char into float(i.e. Z = 90)
    the value of c is a // data type -->char; assigned --> int; compiler convert int into char (i.e. 97 = a)
    */

    // zooby<float, char, char> obje(4.5, 'a', 'Z');
    // obje.display();
    return 0;
}