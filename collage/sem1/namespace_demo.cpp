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

namespace my_ns = A;
namespace your_ns = B;

int main()
{
    A::printx();
    cout << my_ns::x << endl;
    B::printx();

    cout << "\n__now using ___\n";
    using namespace A;
    printx();

    using namespace your_ns;
    // printx(); // gives ambiguious error,,
    /* This is because the using directive brings all the symbols of the namespace into the current scope and can lead to naming conflicts.*/

    using your_ns::printx; // solution..
    printx();

    return 0;
}
