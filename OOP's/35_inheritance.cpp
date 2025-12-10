#include <iostream>
using namespace std;
// Base class
class employee
{
public:
    int id;
    float salary;
    employee(int n)
    {
        id = n;
        salary = 34.0;
    }
    // employee()
    // {
    /*
    default constructor no longer neeeded
    while using --> programmer(int n) : employee(n)
    */
    // }
};

/*
// Derived class syntax
class {{derived - class - name}} : {{visibility - mode}} {{base - class - name}}
{
    class members/methods/etc...
};
Note:
1. visibility mode is private by default
2. private visibility mode: public member of bass class --> private member of derived class
3. public visibility mode: public member of bass class --> public member of derived class
4. private member of base class cannot be inherited
*/

// creating derived class
class programmer : public employee
{
public:
    int langcode = 9;
    // We explicitly tell C++: "Don't use the default! Use the int version!"
    programmer(int n) : employee(n)
    // programmer(int n) // no needed
    {
        // id = n; //<-- You don't even need this now, the base class handles it!
    }
    void getdata()
    {
        cout << "the id's of programmer class is " << id
             << " and salary are " << salary << endl;
    }
};
int main()
{
    employee zooby(1), shah(2);
    cout << "Id of zooby is " << zooby.id << " and salary is " << zooby.salary << endl;
    cout << "Id of shah is " << shah.id << " and salary is " << shah.salary << endl;

    programmer skillf(10);
    cout << "Id of skillf is " << skillf.id << " and salary is " << skillf.salary << endl;
    cout << "Language code is " << skillf.langcode << endl;
    skillf.getdata();
    return 0;
}