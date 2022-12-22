
#include <iostream>
using namespace std;
class complex
{
private:
    int rel;
    int img;

public:
    complex() {}
    ~complex() {}
    void set()
    {
        int r, i;
        cout << "\nen in a+ib format: ";
        cin >> r >> i;
        rel = r;
        img = i;
    }
    void display()
    {
        cout << rel << "+i" << img << '\n';
    }
    complex sum(complex a, complex b)
    {
        complex temp;
        temp.rel = a.rel + b.rel;
        temp.img = a.img + b.img;
        return temp;
    }
};
int main()
{
    complex n1, n2, result;
    n1.set();
    n2.set();
    result = sum(n1, n2);
    n1.display();
    n2.display();
    result.display();
    return 0;
}