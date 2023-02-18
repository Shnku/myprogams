#include <iostream>
using namespace std;
class person
{
private:
    char name[20];

public:
    person() { cout << "\nconstructor called"; }
    ~person() { cout << "\ndestructor callled"; }
    void set()
    {
        cout << "\nen person nm:";
        cin.getline(name, 20);
    }
};

int main()
{

    return 0;
}