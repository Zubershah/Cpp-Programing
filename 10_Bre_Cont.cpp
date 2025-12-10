#include <iostream>
using namespace std;
int main()
{
    cout << "break statement\n";
    for (int i = 0; i < 4; i++)
    {
        cout << i << "\n";
        if (i == 2)
        {
            break;
        }
    }

    cout << "continue statement\n";
    for (int i = 0; i < 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << "\n";
    }

    return 0;
}