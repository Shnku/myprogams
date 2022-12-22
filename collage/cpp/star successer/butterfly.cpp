#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "en the number of: ";
    cin >> n;
    cout << endl;

    // upper loop..
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = i; k <= n - 1; k++)
        {
            cout << "_";
        }
        for (int l = i; l <= n; l++)
        {
            cout << "_";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // cout << endl;

    // bottom loop..
    // n=n/2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "_";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "_";
        }
        for (int m = i; m <= n; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// successfull alll nix experiment star..