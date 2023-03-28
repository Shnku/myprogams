#include <iostream>
using namespace std;

template <typename T>
class calculator
{
private:
    T no1, no2;

public:
    calculator(T, T);
    T add() { return no1 + no2; }
    T sub() { return no1 - no2; }
    T mul();
    T div();
    void display_result();
};

template <typename T>
calculator<T>::calculator(T a, T b) : no1(a), no2(b) {}

template <typename T>
T calculator<T>::div()
{
    return no1 / no2;
}

template <typename T>
T calculator<T>::mul()
{
    return no1 * no2;
}

template <typename T>
void calculator<T>::display_result()
{
    cout << "Numbers are: " << no1 << " and " << no2 << endl;
    cout << no1 << " + " << no2 << " = " << add() << '\n';
    cout << no1 << " - " << no2 << " = " << sub() << '\n';
    cout << no1 << " * " << no2 << " = " << mul() << '\n';
    cout << no1 << " / " << no2 << " = " << div() << '\n';
}

int main()
{
    calculator<float> ftype(5.5, 6.2);
    calculator<int> itype(5, 6);

    cout << "\n__results for int type: __\n";
    itype.display_result();
    cout << "\n__results for float type: __\n";
    ftype.display_result();

    return 0;
}

/*
output.......
...................
__results for int type: __
Numbers are: 5 and 6
5 + 6 = 11
5 - 6 = -1
5 * 6 = 30
5 / 6 = 0

__results for float type: __
Numbers are: 5.5 and 6.2
5.5 + 6.2 = 11.7
5.5 - 6.2 = -0.7
5.5 * 6.2 = 34.1
5.5 / 6.2 = 0.887097
*/
