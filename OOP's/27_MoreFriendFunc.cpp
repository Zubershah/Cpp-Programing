// #include <iostream>
// using namespace std;
// class y;
// class x
// {
//     int data;

// public:
//     void setval(int value)
//     {
//         data = value;
//     }
//     friend void add(x, y);
// };

// class y
// {
//     int data;

// public:
//     void setval(int value)
//     {
//         data = value;
//     }
//     friend void add(x, y);
// };

// void add(x o1, y o2)
// {
//     cout << "summing data of x and y objects give me " << o1.data + o2.data;
// }
// int main()
// {
//     x a;
//     y b;
//     a.setval(5);
//     b.setval(2);
//     add(a, b);
//     return 0;
// }

#include <iostream>
using namespace std;

class c2;
class c1
{
    int val;

public:
    void data(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << "the c1 class value is " << val << endl;
    }
    friend void exch(c1 &, c2 &);
};
class c2
{
    int val;

public:
    void data(int b)
    {
        val = b;
    }
    void display(void)
    {
        cout << "the c2 class value is " << val << endl;
    }
    friend void exch(c1 &, c2 &);
};

void exch(c1 &o1, c2 &o2)
{
    int temp = o1.val;
    o1.val = o2.val;
    o2.val = temp;
}
int main()
{
    c1 x;
    c2 y;
    x.data(4);
    x.display();
    
    y.data(6);
    y.display();
    
    exch(x, y);
    x.display();
    y.display();
    
    return 0;
}