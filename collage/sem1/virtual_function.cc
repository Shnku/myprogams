#include <iostream>
using namespace std;

class baseclass
{
public:
    baseclass() {}
    // void func() { cout << "\nin the baseclass"; }
    /*
    in the baseclass
    in the baseclass

    IN THE DERIVEDCLASS
    in the baseclass
    IN THE DERIVEDCLASS
    in the baseclass
    */
    void virtual func() { cout << "\nin the baseclass"; }
    /*
    in the baseclass
    IN THE DERIVEDCLAS

    IN THE DERIVEDCLASS
    in the baseclass
    IN THE DERIVEDCLASS
    in the baseclass
    */
    ~baseclass() {}
};
class derivedclass : public baseclass
{
public:
    derivedclass(/* args */) {}
    void func() { cout << "\nIN THE DERIVEDCLASS"; }
    ~derivedclass() {}
};

int main()
{
    baseclass *bp, b;
    derivedclass d, *dp;

    bp = &b;
    bp->func();

    bp = &d;
    bp->func();

    // dp = &b; // a value of type "baseclass *" cannot be assigned to an entity of type "derivedclass *"C/C++(513)

    dp = &d;
    dp->func();

    b.func();
    d.func();
    d.baseclass::func();

    return 0;
}
