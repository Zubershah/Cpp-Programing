#include <iostream>
using namespace std;
// template <class T>
// class zooby
// {
// public:
//     T data;
//     zooby(T a)
//     {
//         data = a;
//     }
//     // void display()
//     // {
//     //     cout << data;
//     // }
//     void display();
// };
// template <class T>
// void zooby<T>::display()
// {
//     cout << data << endl;
// }

void func(int a)
{
    cout << "i am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "i am template func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "i am template func() " << a << endl;
}
int main()
{
    // zooby<char> z('Z');
    // zooby<int> z(5);
    // cout << z.data << endl;
    // z.display();

    func(5); // priority will be exact match in this case
    func(2.45);

    func1(2.4); // priority will be exact match in this case
    return 0;
}