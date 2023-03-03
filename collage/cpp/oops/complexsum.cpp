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
        char ch;
        cout << "\nen in a+ib format: ";
        cin >> r >> ch >> i >> ch; // ignore ch-> +i
        rel = r;
        img = i;
    }
    void display()
    {
        cout << endl
             << rel << "+" << img << "i" << '\n';
    }

    // using friend function....no need variable.call..
    friend complex sum(complex a, complex b)
    {
        complex temp;
        temp.rel = a.rel + b.rel;
        temp.img = a.img + b.img;
        return temp;
    }

    // without friens... works like friend .....
    //! but need to variable.call..+.2 parameter..
    complex sum22(complex a, complex b)
    {
        complex temp;
        temp.rel = a.rel + b.rel;
        temp.img = a.img + b.img;
        return temp;
    }

    // work like before but... one parameter only..
    complex sum33(complex a)
    {
        complex temp;
        temp.rel = rel + a.rel;
        temp.img = img + a.img;
        return temp;
    }
};

int main()
{
    complex n1, n2, result;
    n1.set();
    n2.set();
    result = sum(n1, n2); // valid as frnd func..
    n1.display();
    n2.display();
    result.display();

    // result = summ(result, n2); //!error...as not frnd fx
    result = result.sum22(result, n1); //? to fix abive...
    result.display();

    result = result.sum33(n2);
    result.display();
    return 0;
}
