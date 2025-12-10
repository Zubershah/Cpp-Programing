// function objects: wrapped in a class so that it available like an object
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 44, 15, 2, 54, 74};
    // sort(arr, arr + 6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
