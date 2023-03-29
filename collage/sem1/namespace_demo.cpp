#include <iostream>
using namespace std;

namespace A
{
    int x = 10;
    void printx() { cout << x << endl; }
} // namespace A

namespace B
{
    int x = 15;
    void printx() { cout << x; }
} // namespace B

int main()
{
    A::printx();
    B::printx();
    return 0;
}
