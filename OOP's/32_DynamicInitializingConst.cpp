#include <iostream>
using namespace std;
class bank
{
    int prinicpal, years;
    float interest, retval;

public:
    bank(int, int, float);
    bank(int, int, int);
    void print();
};

bank ::bank(int p, int y, float r)
{
    prinicpal = p;
    years = y;
    interest = r;
    retval = prinicpal;
    for (int i = 0; i < y; i++)
    {
        retval = retval * (1 + r);
    }
}

bank ::bank(int p, int y, int r)
{
    prinicpal = p;
    years = y;
    interest = float(r) / 100; // asuume 20% ---> 20.0/100 = 0.20
    retval = prinicpal;
    for (int i = 0; i < y; i++)
    {
        retval = retval * (1 + interest);
    }
}

void bank ::print()
{
    cout << "principal amount was " << prinicpal
         << " /-, return value after " << years
         << " years for the interest rate of " << interest
         << " \% the return amount is " << retval << "/-\n";
}

int main()
{
    int p, y;
    float r;
    int R;

    cout << "enter the value of p, y, and r\n";
    cin >> p >> y >> r;
    bank a1(p, y, r);
    a1.print();

    cout << "enter the value of p, y, and R\n";
    cin >> p >> y >> R;
    bank a2(p, y, R);
    a2.print();

    return 0;
}