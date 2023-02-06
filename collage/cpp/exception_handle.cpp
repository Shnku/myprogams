#include <iostream>
using namespace std;

int main()
{
    int num, don;
    cout << "entr the numanator: ";
    cin >> num;
    cout << "entr the denominator: ";
    cin >> don;
    try
    {
        if (don == 0)
            throw(don);
        else
        {
            float r = num / don;
            cout << "result is: " << r;
        }
    }
    catch (int n)
    {
        cout << "\nzero division error.....";
    }
    return 0;
}
