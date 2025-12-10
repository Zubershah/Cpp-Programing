#include <iostream>
using namespace std;
typedef struct employee
{
    int Id;
    float salary;
    char section;
} ep;

union money
{
    float price;
    char car;
};

int main()
{
    ep zooby;
    // struct employee zooby;
    zooby.Id = 159357;
    zooby.salary = 180000;
    zooby.section = 'A';

    cout << "the salary of zooby is " << zooby.salary
         << " and his Id is " << zooby.Id
         << " and belong to section " << zooby.section << endl;

    union money m1;
    /*
    Use union only when you are certain you will never need to access rice and car at the same time.
    If you need both values to exist simultaneously,
    you must change union to struct.
    */
    m1.price = 34;
    m1.car = 'M';             // overwrite
    cout << m1.price << endl; // garbage value return
    cout << m1.car << endl;   // M

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    /*
    In C++, an enum (enumeration) doesn't store the text "breakfast" or "lunch".
    Instead, it assigns a integer number to each name in the list, starting from 0.
    You can assign specific numbers if you don't want the default
    enum meal
    {
        breakfast=10,
        lunch,
        dinner
    };
    Output 10 11 12
    */
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    return 0;
}