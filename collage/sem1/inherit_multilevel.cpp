#include <iostream>
using namespace std;

class Animal
{
public:
    Animal() {}
    void eat()
    {
        cout << "\nenating" << endl;
    }
    ~Animal() {}
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class BabyDog : public Dog
{
public:
    void weep()
    {
        cout << "Weeping...";
    }
};

int main()
{
    BabyDog d1;
    d1.eat();

    d1.bark();
    d1.weep();

    return 0;
}
