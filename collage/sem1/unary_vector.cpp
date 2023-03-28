#include <iostream>
using namespace std;

class myvector
{
private:
    int arr[3];

public:
    myvector();
    myvector(int *);
    myvector friend operator-(myvector);
    void show();
    ~myvector() {}
};

myvector::myvector()
{
    // Default Constructor defined outside class
    for (int i = 0; i < 3; i++)
        arr[i] = 0;
}

myvector::myvector(int *x)
{
    // Constructing myvector from an array outside
    for (int i = 0; i < 3; i++)
        arr[i] = x[i];
}

myvector operator-(myvector V)
{
    for (int i = 0; i < 3; i++)
        V.arr[i] = -V.arr[i];

    return V;
}

void myvector::show()
{
    for (int i = 0; i < 3; i++)
        cout << " " << arr[i];
}

int main()
{
    int array[] = {4, 5, 6};
    myvector v1(array), v2;
    cout << "\nBEFORE___\n";
    v1.show();
    v2 = -v1;
    cout << "\nAFTER__v1 \n";
    v1.show();
    cout << "\nAFTER__v2 \n";
    v2.show();

    return 0;
}

// output
/*
BEFORE___
 4 5 6
AFTER__v1
 4 5 6
AFTER__v2
 -4 -5 -6
*/
