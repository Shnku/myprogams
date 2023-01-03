#include <iostream>
using namespace std;
class employee
{
private:
    float sal;
    char nm[50];

public:
    int id;
    employee() {}
    ~employee() {}
    void set()
    {
        int id;
        float s;
        char *np;
        cout << "\nen the details: ";
        cin >> id >> s >> np;
        id = id;
        sal = s;
        nm[50] = *np;
    }
    void display()
    {
        cout << "\nid: " << id;
        cout << "\nsal: " << sal;
        cout << "\nname: " << nm;
    }
};

int main()
{
    employee e1;
    e1.set();
    e1.display();

    // cout << this->e1.id; //gives error..?
    return 0;
}