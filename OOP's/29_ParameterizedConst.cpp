// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     complex(int, int);
//     void print()
//     {
//         cout << "your number is " << a << " +-i" << b << endl;
//     }
// };
// complex ::complex(int x, int y)
// {
//     a = x;
//     b = y;
// }
// int main()
// {
//     complex Ob(4, 6); // Implicit Call
//     Ob.print();

//     complex Obj = complex(5, 7); // Explicit call
//     Obj.print();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class point
// {
//     int x, y;

// public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void display()
//     {
//         cout << "the point is (" << x << ", " << y << ")" << endl;
//     }
// };
// int main()
// {
//     point p(1, 1);
//     p.display();
//     point q(4, 6);
//     q.display();
//     return 0;
// }

/************Quizz****************/

#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x, y;
    friend void function(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "the points is (" << x << ", " << y << ")" << endl;
    }
};
void function(point o1, point o2)
{
    int num1 = pow((o2.x - o1.x), 2);
    int num2 = pow((o2.y - o1.y), 2);
    double result = sqrt((num1) + (num2));
    cout << "the distance between 2 point is " << result << endl;
}
int main()
{
    point p1(1, 2);
    p1.display();
    point p2(3, 4);
    p2.display();

    function(p1, p2);
    return 0;
}