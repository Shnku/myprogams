#include <iostream>
using namespace std;

class account
{
protected:
    int id;
    float salary;

public:
    account() {}
    account(int i, float s)
    {
        id = i, salary = s;
    }
    void show_account()
    {
        cout << "\nid: " << id << "\nsalary: " << salary;
    }
    ~account() {}
};

class programmer : public account
{
    float bonus;

public:
    programmer() {}
    // programmer(int i, float s, float b) //correct..
    // {
    //     id = i;
    //     salary = s;
    //     bonus = b;
    // }
    programmer(int i, float s, float b) : account(i, s)
    {
        bonus = b;
    }
    // programmer(int i, float s, float b) // this is wrong..
    // {
    //     account(i, s);
    //     /*gives.....
    //     id: 32518
    //     salary: 0
    //     bonus: 5400.99
    //     */
    //     bonus = b;
    // }

    void show_programmer_acc()
    {
        cout << "\nid: " << id << "\nsalary: " << salary << "\nbonus: " << bonus;
    }
    ~programmer() {}
};

int main()
{
    account a1(1, 54000);
    cout << "\nINSIDE account: ";
    a1.show_account();

    cout << "\n\nINSIDE programmer: ";
    programmer p1(02, 50000.50, 5400.99);
    p1.show_programmer_acc();

    return 0;
}
