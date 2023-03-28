#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A() {}
    void get_a(int k) { a = k; }
    ~A() {}
};

class B
{
protected:
    int b;

public:
    B() {}
    void get_b(int l) { b = l; }
    ~B() {}
};

class C : public A, public B
{
public:
    C() {}
    void display()
    {
        cout << "\nthe a is :" << a << endl
             << "the b is: " << b << endl
             << "the addition is: " << a + b << endl;
    }
    ~C() {}
};

int main()
{
    C member;
    member.get_a(10);
    member.get_b(20);
    member.display();

    return 0;
}
