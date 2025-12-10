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
    zooby<> obj(4, 6.4, 'Z');
    obj.display();

    zooby<float, char, char> obje(4.5, 'a', 'Z');
    obje.display();
    return 0;
}