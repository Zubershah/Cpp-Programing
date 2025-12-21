#include <iostream>
using namespace std;
class employee
{
    int id;
    float salary;

public:
    void setid(void)
    {
        cout << "enter the salary of employee\n";
        cin >> salary;
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
//     employee zooby, shah, khan, pathan;
//     zooby.setid();
//     shah.setid();
//     khan.setid();
//     pathan.setid();

//     zooby.getid();
//     shah.getid();
//     khan.getid();
//     pathan.getid();

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