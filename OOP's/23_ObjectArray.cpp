#include <iostream>
using namespace std;
class employee
{
    int id;
    float salary;

public:
    void setid(void)
    {
        salary = 1.2;
        cout << "enter the id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of employee is " << id << " salary is " << salary << endl;
    }
};
int main()
{
    // employee zooby, shah, khan, pathan;
    // zooby.setid();
    // zooby.getid();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
    }
    for (int i = 0; i < 4; i++)
    {
        fb[i].getid();
    }
    return 0;
}