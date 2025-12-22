#include <iostream>
using namespace std;
/*
template<class T1, class T2, so on....>
class class-name
{
// body
};
*/
template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << "\t" << data2 << endl;
    }
};
int main()
{
    // myclass<int, char> obj(1, 'F');
    // obj.display();

    // myclass<int, float> obj1(1, 5.5);
    // obj1.display();

    // myclass<float, char> obj2(1.5, 'F');
    // obj2.display();

    myclass<char, char> obj2('Z', 'F');
    obj2.display();
    return 0;
}