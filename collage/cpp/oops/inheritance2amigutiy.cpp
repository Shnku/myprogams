#include <iostream>
using namespace std;

// the uppermost class..............
class base1
{
private:
public:
    int b;
    void display()
    {
        cout << "this is base1 class " << b << '\n';
    }
};

// the uppermost class 222222222.................
class base2
{
private:
public:
    int b;
    void display()
    {
        cout << "this is base2 class " << b << '\n';
    }
};

// derived class 1111111111..............
class derived : public base1, public base2
{
private:
public:
    base2::b;
    // using base2::b; // recommended......
    // base2::display(); // error..
    // for fixing function...
    void display()
    {
        base2::display();
    }
};

// the main function......
int main()
{
    base1 top;
    base2 top2;
    top.b = 10;
    top2.b = 20;
    top.display();
    top2.display();

    derived bottom;
    // bottom.b = 40; //this in invalid....
    // bottom.(top::b) = 30; //this is invalid..
    bottom.base2::b = 40; // valid...
    bottom.display();
    bottom.b = 100;
    bottom.display();
    bottom.base1::b = 50; // valid...
    bottom.base1::display();

    return 0;
}