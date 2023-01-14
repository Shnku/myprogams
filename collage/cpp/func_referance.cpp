#include <iostream>
using namespace std;

int &max(int &x, int &y)
{
    return (x > y ? x : y);
}

int main()
{
    int a = 10, b = 20;
    cout << "before: " << a << " " << b << '\n';
    cout << (max(a, b)) << '\n';
    cout << (max(a, b) = -1) << '\n';
    cout << (max(a, b)) << '\n';
    cout << "After: " << a << " " << b << '\n';

    return 0;
}