#include <iostream>
using namespace std;

// the topmost class.....
class upper
{
public:
    int up;
    void display()
    {
        cout << "upper value: " << up << '\n';
    }
};

// those are middle level classes.............
class middle1 : public upper
{
public:
    int mid1;
};

class middle2 : public upper
{
public:
    int mid2;
};

// most lower class inherit from 2 mid.........
class lower : public middle1, public middle2
{
public:
    void display()
    {
        upper::display(); // error....
    }
};

// the main function......
int main()
{
    upper obj_of_top;
    obj_of_top.up = 10;
    obj_of_top.display();

    middle1 obof_mid1;
    middle2 obof_mid2;
    obof_mid1.up = 20;
    obof_mid1.display();
    obof_mid2.up = 30;
    obof_mid2.display();

    lower obj_low;
    obj_low.middle1::up = 100;
    obj_low.middle1::display();

    obj_low.upper::up = 200;
    obj_low.upper::display();
    obj_low.display();

    return 0;
}