#include <iostream>
using namespace std;

class top
{
public:
    void show() { cout << "\ninside top"; }
};

class mid1 : virtual public top
{
};

class mid2 : public virtual top
{
};

class down : public mid1, public mid2
{
};

int main()
{
    down obj;
    obj.show();
    return 0;
}
