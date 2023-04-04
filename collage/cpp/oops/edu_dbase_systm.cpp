#include <iostream>
using namespace std;

// class base......
class staff
{
    int code;
    string name;

public:
    void set_staff()
    {
        cout << "\nen the id/code of staff: ";
        cin >> code;
        cout << "\nen the mane of staff: ";
        getline(cin, name);
    }
};

// 3 derived class...
class teacher : public staff
{
    string subject;
    string publication;

public:
    void set_teacher()
    {
        cout << "\nen subject: ";
        getline(cin, subject);
        cout << "\nen publication: ";
        getline(cin, publication);
    }
};

class typist : public staff
{
    int speed;

public:
    void set_speed()
    {
        cout << "\nen typist speed: ";
        cin >> speed;
    }
    void get_speed() { cout << "\nspeed is: " << speed; }
};

class officer : public staff
{
    int grade;

public:
    void set_grade()
    {
        cout << "\nen officer grade: ";
        cin >> grade;
    }
    void get_grade() { cout << "\ngrade is: " << grade; }
};

// derived of typist class....
class regular : public typist
{
};

class casual : public typist
{
    bool daily;
    float wages;

public:
    void set_casual()
    {
        cout << "\nis daily? ";
        cin >> daily;
        cout << "\nen wages: ";
        cin >> wages;
    }
};

//.....this is the main function......
int main()
{

    return 0;
}
