/* function objects: wrapped in a class so that it available like an object */
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 44, 15, 2, 54, 74};
    // sort(arr, arr + 3); // sort only upto 3 element. Output: 1 15 44 2 54 74
    sort(arr, arr + 3, greater<int>()); // sort in Descending order. Output: 44 15 1 2 54 74
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
