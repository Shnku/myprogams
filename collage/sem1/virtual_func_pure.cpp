#include <iostream>
using namespace std;

class number
{
protected:
    int value;

public:
    number() {}
    number(int);
    virtual void display() = 0;
};

class hextype : public number
{
public:
    hextype() {}
    hextype(int);
    void display();
};

class dectype : public number
{
public:
    dectype() {}
    dectype(int);
    void display();
};

number::number(int n) : value(n) {}

hextype::hextype(int k) : number(k) {}
void hextype::display() { cout << hex << value << "\n"; }

dectype::dectype(int k) : number(k) {}
void dectype::display() { cout << dec << value << "\n"; }

int main()
{
    dectype d(5);
    hextype h(10);
    d.display();
    h.display();
}
