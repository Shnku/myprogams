#include <iostream>
using namespace std;
class myvector
{
private:
    int i, j, k;

public:
    myvector();
    myvector(int a, int b, int c);
    myvector operator-(void);
    // friend myvector operator-(myvector v);
    void show();
    ~myvector();
};

myvector::myvector() {}
myvector::~myvector() {}
myvector::myvector(int a, int b, int c)
{
    i = a, j = b, k = c;
}

myvector myvector::operator-() // member
{
    i = -i, j = -j, k = -k;
    return *this;
    // myvector V;
    // V.i = -i, V.j = -j, V.k = -k;
    // return V; //?it does not change the self value also..
}

// myvector operator-(myvector v) //friend
// {
//     v.i = -v.i, v.j = -v.j, v.k = -v.k;
//     return v;
// }

void myvector::show()
{
    cout << "\n"
         << i << " " << j << " " << k << " ";
}

int main()
{
    myvector a(4, 5, 6), b;
    cout << "\nBEFORE___a";
    a.show();
    b = -a;
    cout << "\nAFTER__a";
    a.show();
    cout << "\nAFTER__b";
    b.show();

    cout << "\nperform on b=-b\n";
    b = -b;
    cout << "\n_____a is: ";
    a.show();
    cout << "\n_____b is__: ";
    b.show();
    return 0;
}

/**/
// output when not using friend function...
//? self value changed properly...
/*
BEFORE___a
4 5 6
AFTER__a
-4 -5 -6
AFTER__b
-4 -5 -6
perform on b=-b

_____a is:
-4 -5 -6
_____b is__:
4 5 6
*/

/**/
// ?but is we use friend function ...
//! self value is not  changed ...
// output is....
/*
BEFORE___a
4 5 6
AFTER__a    //!a doedn't changed..
4 5 6
AFTER__b   //!change value assigned to b;
-4 -5 -6
perform on b=-b

_____a is:
4 5 6
_____b is__:
4 5 6
*/

//? if we make friend function pass by ref ...//*still error
/*
If you define operator- as myvector friend operator-(myvector &);
and try to access the arr member variable in the operator- function as V.arr[i],
!it will result in a compilation error,
?because arr is a private member of the myvector class and cannot be accessed from outside the class.
*/
