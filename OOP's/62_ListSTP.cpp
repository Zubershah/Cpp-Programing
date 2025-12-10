#include <iostream>
#include <list>
using namespace std;
void display(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
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

    // below is replace by display function
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
    
    // remove element from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9); // remove the element 9 from the list
    // display(list1);
    
    //sorting the list
    // list1.sort();
    // display(list1);
    
    //reverse list
    list1.reverse();
    display(list1);

    list<int> list2(3); // empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    // list1.sort();
    // list2.sort();
    list1.merge(list2);
    cout<<"list 1 after merge: "<<endl;
    display(list1);
    return 0;
}