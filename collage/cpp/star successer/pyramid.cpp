#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "en the nth: ";
    cin >> n;
    cout << "\n";

    // using start index 0 to <
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << j;
        }
        for (int k = 0; k < i; k++)
        {
            cout << k;
        }
        for (int l = 0; l < i - 1; l++)
        {
            cout << l;
        }
        cout << "\n";
    }
    cout << "\n";

    // using sratt index 0 to <=
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k;
        }
        for (int l = 0; l <= i - 1; l++)
        {
            cout << l;
        }
        cout << "\n";
    }
    cout << "\n";

    // using start index 1 to <= //most perfect
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = 1; l <= i - 1; l++)
        {
            cout << l;
        }
        cout << "\n";
    }
    cout << "\n";

    // using start index 1 to <
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << j;
        }
        for (int k = 1; k < i; k++)
        {
            cout << k;
        }
        for (int l = 1; l < i - 1; l++)
        {
            cout << l;
        }
        cout << "\n";
    }
}