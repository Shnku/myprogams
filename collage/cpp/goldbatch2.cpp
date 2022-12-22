#include <iostream>
using namespace std;

// prime check function......
int is_prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return 1;
    else
        return 0;
}

// gold batch conjecture check function.......
void funcgoldbatch(int no)
{
    int half = no / 2;
    for (int part = 2; part < half; part++)
    {
        if (is_prime(part) == 1 && is_prime(no - part == 1))
        {
            cout << "two pairs are: " << part << " " << no - part;
        }
    }
    cout << "no goldbatched found.";
    exit(0);
}

// the main function.........
int main()
{
    int number;
    cout << "en a no : ";
    cin >> number;
    if (is_prime(number) == 1)
    {
        cout << "en a nonprime number" << endl;
    }

    // funcgoldbatch(number);
    int no = number;
    int part1, part2;
    for (part1 = 2; part1 < no/2; part1++)
    {
        //     if (is_prime(part1) == 1)
        //     {
        //         part2 = no - part1;
        //         if (is_prime(part2) == 1)
        //         {
        //             cout << "two pairs arew: " << part1 << " " << part2 << endl;
        //         }
        //     }

        if (is_prime(part1) == 1 && is_prime(no - part1) == 1)
        {
            cout << "two pairs are: " << part1 << " " << no - part1 << endl;
        }
    }
    cout << "no goldbatched found.";
    exit(0);

    return 0;
}

