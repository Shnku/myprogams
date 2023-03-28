#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void get_a()
    {
        cout << "Enter the value of 'a' :" << endl;
        cin >> a;
    }
};

class B : public A
{
protected:
    int b; // int a;
public:    // get_a();
    void get_b()
    {
        cout << "Enter the value of 'b' : " << endl;
        cin >> b;
    }
};

class C
{
protected:
    int c;

public:
    void get_c()
    {
        cout << "Enter the value of c is: " << endl;
        cin >> c;
    }
};

class D : public B, public C
{
protected:
    int d;

public:
    void mult()
    {
        get_a();
        get_b();
        get_c();
        d = a * b * c;
        cout << "Multiplication of a, b, c is: " << endl;
    }
};

int main()
{
    D d;
    d.mult();
    return 0;
}
