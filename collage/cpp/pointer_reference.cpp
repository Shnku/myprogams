#include <iostream>
using namespace std;

int main()
{
    int ver = 100;
    int &ref = ver;
    int & r=ver;
    int *ptr = &ver;
    int *p;
    p = &ver;
    // p = ver;//invalid cause it takes only address
    // int *ptr2=ver;//invalid
    // int &ref2;//invalid without value
    // ref2 = ver;

    cout << ver << '\n';
    cout << &ver << '\n';
    cout << ptr << '\n';
    cout << &ptr << '\n';
    cout << *ptr << '\n';
    cout << ref << '\n';
    cout << &ref << '\n';
    cout << r << '\n';
    cout << &r << '\n';

    return 0;
}