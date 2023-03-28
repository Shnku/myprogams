#include <iostream>
using namespace std;

template <typename type1, typename type2>
type1 add(type1 a, type2 b)
{
    return a + b;
}

int main()
{
    cout << "\nint=int+float :"
         << add<int, float>(3, 4.5);
    cout << "\nint=int+int :"
         << add<int, int>(3, 4.5);
    cout << "\nfloat=float+double :"
         << add<float, double>(3, 4.5);

    return 0;
}
/*
int=int+float :7
int=int+int :7
float=float+double :7.5
*/
