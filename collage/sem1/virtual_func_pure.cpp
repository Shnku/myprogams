#include <iostream>
using namespace std;

class number
{
protected:
    int value;

public:
    number(int n) : value(n) {}
    virtual void display() = 0;
};

class hextype : public number
{
public:
    hextype(int k) : number(k) {}
    void display() { cout << hex << value << endl; }
};

class dectype : public number
{
public:
    dectype(int p) : number(p) {}
    void display() { cout << dec << value << endl; }
};

int main()
{
    dectype d(5);
    hextype h(10);
    d.display();
    h.display();
}
