#include <iostream>
using namespace std;
void swapv(int x, int y) // call by vlu
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap(int *x, int *y) // call by ref use *
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap(int &x, int &y) // call by ref
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "en the no: ";
    cin >> a >> b;
    cout << "\nbefore swap:" << a << "  " << b;
    swapv(a, b); // call by value
    cout << "\nafter swap: " << a << "  " << b;
    swap(&a, &b);
    cout << "\nafter swap: " << a << "  " << b;
    swap(a, b); // pass by referance..
    cout << "\nafter swap: " << a << "  " << b;
    return 0;
}