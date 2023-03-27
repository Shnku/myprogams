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
myvector::myvector(int a, int b, int c)
{
    i = a, j = b, k = c;
}
myvector myvector::operator-()
{
    i = -i, j = -j, k = -k;
    return *this;
}
// myvector operator-(myvector v)
// {
//     v.i = -v.i, v.j = -v.j, v.k = -v.k;
//     return v;
// }
myvector::~myvector() {}
void myvector::show()
{
    cout << "\n"
         << i << " " << j << " " << k << " ";
}

int main()
{
    myvector a(4, 5, 6), b;
    b = -a;
    a.show();
    b.show();
    b = -b;
    a.show();
    b.show();
    return 0;
}
