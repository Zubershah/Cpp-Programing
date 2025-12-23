#include <iostream>
#include <list>
using namespace std;
template <class T>
void display(list<T> l)
{
    list<int>::iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of zero length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    /* below is replace by display function */
    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    display(list1);

    /* remove element from the list */
    // list1.pop_back(); // Output: 5 7 1 9
    // list1.pop_front(); // Output: 7 1 9 12
    // list1.remove(9); // remove the element 9 from the list ---> Output: 5 7 1 12
    // display(list1);

    /* sorting the list */
    // list1.sort();
    // display(list1); // Output: 1 5 7 9 12

    /* reverse list */
    // list1.reverse();
    // display(list1); // Output: 12 9 1 7 5

    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    list1.sort();
    display(list1);
    list2.sort();
    display(list2);
    list1.merge(list2);
    cout << "list 1 after merge: " << endl;
    display(list1);
    return 0;
}