#include <iostream>
using namespace std;

void no_check(int);
void factor(int);

int no; // global number...

int main()
{
    cout << "en the no: ";
    cin >> no;
    factor(no);
}

void factor(int nth)
{
    int sum = 0;
    for (int i = 1; i <= nth; i++)
    {
        if (nth % i == 0)
        {
            sum = sum + i;
        }
    }
    no_check(sum);
}

void no_check(int n)
{
    if (n == no)
        cout << "yes";
    else
        cout << "no";
}
