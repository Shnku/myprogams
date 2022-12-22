#include <iostream>
using namespace std;

class player
{
private:
    int health;
    char level;

public:
    player() {}
    ~player() {}
    // geter seter functions....
    void set(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    void get(int *h, char *l)
    {
        h = &health;
        l = &level;
    }
};

int main()
{
    player a;
    a.set(100, 'a');
    int c;
    char b;
    a.get(&c, &b);
    cout << c << endl;
    cout << b << endl;
    return 0;
}