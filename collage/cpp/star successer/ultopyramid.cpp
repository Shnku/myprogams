#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "en the nth: ";
    cin >> n;
    cout << "\n";

    // start index 0 to <
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j;
        }
        for (int k = i; k < n; k++)
        {
            cout << k;
        }
        for (int k = i; k < n - 1; k++)
        {
            cout << k;
        }
        cout << endl;
    }
    cout << endl;

    // start index 0 to <=
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        for (int k = i; k <= n; k++)
        {
            cout << k;
        }
        for (int l = i; l <= n; l++)
        {
            cout << l;
        }
        cout << endl;
    }
    cout << endl;

    // start index 1 to <= //most perfect
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "_";
        }
        for (int k = i; k <= n; k++)
        {
            cout << k;
        }
        for (int k = i; k <= n - 1; k++)
        {
            cout << k;
        }
        cout << endl;
    }
    cout << endl;

    // start index 1 to <=
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        for (int k = i; k < n; k++)
        {
            cout << k;
        }
        for (int k = i; k < n - 1; k++)
        {
            cout << k;
        }
        cout << endl;
    }
    cout << endl;
}