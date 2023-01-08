#include <iostream>
using namespace std;

// int multi(int a, int b)
// {
//     return a * a * b * b;
// }
inline int multi(int a, int b)
{
    return a * a * b * b;
}

int main()
{
    int no1, no2;
    cout << "en the no: ";
    cin >> no1 >> no2;
    for (int i = 0; i < 1000; i++)
    {
        cout << "\n the sum is: " << multi(no1, no2);
        cout << "\n the sum is: " << multi(no1, no2);
        cout << "\n the sum is: " << multi(no1, no2);
        cout << "\n the sum is: " << multi(no1, no2);
        cout << "\n the sum is: " << multi(no1, no2);
        cout << "\n the sum is: " << multi(no1, no2);
        cout << "\n the sum is: " << multi(no1, no2);
    }

    return 0;
}