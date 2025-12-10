#include <iostream>
using namespace std;
int main()
{
    cout << "for loop\n";
    for (int i = 0; i < 4; i++)
    {
        cout << i << "\n";
    }

    cout << "\nwhile loop\n";
    int i = 1;
    while (i <= 40)
    {
        cout << i << "\n";
        i++;
    }

    cout << "\ndo-while loop\n";
    int j = 1;
    do
    {
        cout << j << "\n";
        j++;
    } while (j != 10);

    return 0;
}