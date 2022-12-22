#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "en the range";
    cin >> n;
    cout << endl;

    // row 1st...
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        // for
        cout << endl;
    }

    // row2nd..
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // row 3rd..
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // row 4th...
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << "*";
        }
        for (int l = i; l <= n - 1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}