#include <iostream>
using namespace std;
int main()
{
    /************************Arrays*****************************/
    // int marks[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // cout << marks[0] << "\n";
    // cout << marks[1] << "\n";
    // cout << marks[2] << "\n";
    // cout << marks[3] << "\n";
    // cout << marks[4] << "\n";
    // cout << marks[5] << "\n";
    // cout << marks[6] << "\n";
    // cout << marks[7] << "\n";
    // cout << marks[8] << "\n";
    // cout << marks[9] << "\n";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "the value of index " << i << " is " << marks[i] << "\n";
    // }

    // Quizz same opeartion for while and do while loop
    // int i = 0;

    // while (i < 10)
    // {
    //     cout << "the value of index " << i << " is " << marks[i] << "\n";
    //     i++;
    // }

    // do
    // {
    //     cout << "the value of index " << i << " is " << marks[i] << "\n";
    //     i++;
    // } while (i < 10);

    /***************************Array POinters*****************************/
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        cout << "the value of index " << i << " is " << *(ptr + i) << endl;
    }

    return 0;
}