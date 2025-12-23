#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> v)
{
    cout << "displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << endl;
    }
    cout << endl;
}
int main()
{
    /*--------------------------Ways to create a vector----------------------------*/

    vector<int> vec1; // zero size integar vector
    int element;
    int size;
    cout << "enter the size of a vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter an element to add to this vector ";
        cin >> element;
        vec1.push_back(element); // push_back is the primary way to grow a dynamic array. It handles all the complex memory work so you can just focus on adding data.
    }
    vec1.pop_back(); // remove the last element(say size = 5, elements are 1, 2, 3, 4, 5 and the output will be 1, 2, 3, 4 )
    display(vec1);
    vector<int>::iterator iter = vec1.begin(); // Creates an iterator named 'iter' that points to the first element (index 0) of vec1
    vec1.insert(iter, 566);                    // 566 becomes the new first element. Everything else shifts to the right.(566, 1, 2, 3, 4)
    vec1.insert(iter + 1, 567);                // add 567 to the second element. Everything else shifts to the right.(566, 567, 1, 2, 3, 4)
    vec1.insert(iter + 1, 5, 568);             // add 568 5 times from second element. Everything else shifts to the right.(566, 568, 568, 568, 568, 568, 567, 1, 2, 3, 4)
    display(vec1);
    /*
    vector<int>::iterator iter = vec1.end();   // Creates an iterator named 'iter' that points to the last element (index 4) of vec1
    vec1.insert(iter, 566);                    // (1, 2, 3, 4, 566)
    vec1.insert(iter + 1, 567);                // (1, 2, 3, 4, 566, 567)
    vec1.insert(iter + 1, 5, 568);             // (1, 2, 3, 4, 566, 568, 568, 568, 568, 568, 567)
    display(vec1);
    */

    vector<char> vec2(4); // Initialize with size of 4 and default values '\0'. character vector
    vec2.push_back('5');  // (Output: \0, \0, \0, \0, 5)
    display(vec2);

    vector<char> vec3(vec2); // Create vec3 as an exact copy of vec2
    display(vec3);           // (Output: \0, \0, \0, \0, 5)

    vector<int> vec4(6, 3); // Initialize with size of 6 and default value of 3. integer vector
    display(vec4);          // (Output: 3, 3, 3, 3, 3, 3)
    cout << vec4.size();    // 6

    return 0;
}