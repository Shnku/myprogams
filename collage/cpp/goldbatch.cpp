// successful goldbatch's number............
#include <iostream>
using namespace std;

// prime no checker.........
bool checkprime(int no)
{
    int count = 0;
    for (int i = 1; i <= no; i++)
    {
        if (no % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return true;
    else
        return false;
}

void nocheck(int no)
{
    int result = checkprime(no);
    if (result == 1)
    {
        cout << result << " en a nonprime no...";
    }
}

// the main function.............
int main()
{
    int n, result;
    cout << "en the data: ";
    cin >> n;

    nocheck(n);
    result = checkprime(n);
    if (result == 1)
    {
        cout << result << " en a nonprime no...";
        exit(0);
    }

    int arr[100];
    int ar_k = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkprime(i) == 1)
        {
            arr[ar_k] = i;
            ar_k++;
        }
    }

    // array checking........
    for (int i = 0; i < ar_k / 2; i++)
    {
        for (int j = 0; j < ar_k; j++)
        {
            if (arr[i] + arr[j + 1] == n)
            {
                cout << "two pairs are: " << arr[i] << "+" << arr[j + 1] << endl;
            }
        }
    }
    cout << "no more  goldbatched found....";
    return 0;
}
