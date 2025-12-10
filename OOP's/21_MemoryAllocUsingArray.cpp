#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    /*
    Runs AUTOMATICALLY. Note: No "void" and name is class---> "shop".
        shop()
        {
            counter = 0;
        }
    */
    void initcounter(void)
    {
        counter = 0;
    }
    void displayprice(void);
    void setprice(void);
};

void shop ::setprice(void)
{
    cout << "enter id of your item No." << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item No." << counter + 1 << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << "\n";
    }
}

int main()
{
    shop business;
    business.initcounter(); // another method is constructor
    business.setprice();
    business.setprice();
    business.setprice();
    business.displayprice();
    return 0;
}