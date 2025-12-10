#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; // default value is 0
    /*
    This tells the compiler: "Don't create a new count for every employee.
    Just create one count for the whole class to share."
    */

public:
    void setdata(void)
    {
        cout << "enter the id \n";
        cin >> id;
        count++;
    }
    
    void getdata(void)
    {
        cout << "the id of the employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(void) //Static functions can ONLY access other static variables.
    {
        cout << "the value of count is " << count << endl;
    }
};
int employee ::count; // This is mandatory for static variables.
int main()
{
    employee zooby, shah, khan;
    zooby.setdata();
    zooby.getdata();
    
    shah.setdata();
    shah.getdata();
    
    khan.setdata();
    khan.getdata();
    employee::getcount(); // this is mandatory for calling static function if needed
    
    return 0;
}