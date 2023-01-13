#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * f(n - 1));
}

int combination(int n, int r)
{
    // if(n==0 && r==0)
    //     return 1;
    // else
    return f(n) / (f(r) * f(n - r));
    // return f(n) / f(r) * f(n - r); //error...
    // return (f(n) / f(r) * f(n - r)); //still error....
}

int main()
{
    int nth;
    cout << "en the nth term: ";
    cin >> nth;

    for (int i = 0; i <= nth; i++)
    {
        for (int j = nth; j >= i; j--)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            // cout << combination(i, j) << " ";
            int a=combination(i, j);
            printf(" %3d ", a);
        }
        cout << endl;
    }

    return 0;
}



    // cout << f(5) << endl;
    // cout << f(2) << endl;
    // cout << f(5 - 2) << endl;
    // cout << f(5) / f(2) * f(5 - 2) << endl;
    // cout << combination(nth, 2);