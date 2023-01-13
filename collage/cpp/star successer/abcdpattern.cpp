#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    int nt;
    cout << "en the no of row: ";
    cin >> nt;
    int nth=nt/2 +1;

    for (int i = 1; i <= nth - 1; i++)
    {
        for (int j = nth; j >= i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " " << ch << "  ";
            ch++;
        }
        // for (int j = 1; j <= i; j++)
        // {
        //     cout << ch;
        //     ch++;
        // }
        cout << endl;
    }
    for (int i = 1; i <= nth; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = nth; j >= i; j--)
        {
            cout << " " << ch << "  ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}