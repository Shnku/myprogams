#include <iostream>
using namespace std;

class grandfather // most base class...
{
private:
    int secret;

public:
    grandfather() { cout << "grandfather born"; }
    void set(int s) { secret = s; }
    void display() { cout << "gradfather: " << secret << endl; }
    ~grandfather() { cout << "grandfather dead"; }
};

class father : public grandfather // first derived class....
{
private:
    int secrate_f;

public:
    father() { cout << "father born"; }
    void set(int s) { secrate_f = s; }
    void display() { cout << "father: " << secrate_f << endl; }
    ~father() { cout << "father dead"; }
};

class son : public father, public grandfather // derived from both.
{
private:
    int sec_of_son;

public:
    son() { cout << "son born"; }
    void set(int s) { sec_of_son = s; }
    void display() { cout << "son: " << sec_of_son << endl; }
    ~son() { cout << "son dead"; }
};

int main()
{
    grandfather algol;
    father bcpl;
    son cpl;

    algol.set(900);
    bcpl.father::set(9999); // this and
    bcpl.set(9999);         // this both cause problem....
    cpl.son::set(10000);

    return 0;
}
                                    