#include <iostream>
using namespace std;

// base class define....
class account
{
private:
    char customar_name[20];
    int ac_no;
    char ac_type[10];

protected:
    double balance = 0;

public:
    void create_ac()
    {
        cout << "Enter name: ";
        // cin >> customar_name; //couldnot take space...
        cin.getline(customar_name, 20);
        cout << "Enter ac_no: ";
        cin >> ac_no;
        cout << "enter ac_type: ";
        cin >> ac_type;
    }
    void dsply_ac_detils()
    {
        cout << "\nname:" << customar_name << '\n'
             << "ac_no: " << ac_no << '\n'
             << "ac_type: " << ac_type << '\n'
             << "your Balance is: " << balance << '\n';
    }
    void deposit()
    {
        double ammount;
        cout << "\nen the ammount to deposit: ";
        cin >> ammount;
        balance += ammount;
    }
    void withdraw()
    {
        double ammount;
        cout << "\nen the ammount to withdraw: ";
        cin >> ammount;
        balance -= ammount;
    }
    // void update(bool falg)
    // {
    //     if (falg == true)
    //         balance = 0;
    // }
    void permissiom(){
        if(ac_type=="savings");
            
    }
};

// sub class define....
class curr_ac : public account
{
private:
    float min_bal = 1000;
    float penalty = 500;

public:
    void min_cheaker()
    {
        if (balance < min_bal)
            balance -= penalty;
    }
};

class save_ac : public account
{
private:
    float interest;
    float rate;

public:
    void comp_interest()
    {
        interest = balance * (1 + rate / 100);
        balance += interest;
    }
};

// this is main function............
int main()
{
    account a;
    a.create_ac();
    a.dsply_ac_detils();

    return 0;
}
