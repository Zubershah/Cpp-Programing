// Map is a Associative array
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<string, int> marksmap;
    marksmap["zooby"] = 98;
    marksmap["shah"] = 59;
    marksmap["khan"] = 02;

    marksmap.insert({{"pathan", 44}, {"Mr.zuber", 55}});

    map<string, int>::iterator itr;
    for (itr = marksmap.begin(); itr != marksmap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }

    cout << "the size is: " << marksmap.size() << endl;
    cout << "the maximum size is: " << marksmap.max_size() << endl;
    cout << "the empty is: " << marksmap.empty() << endl;
    return 0;
}