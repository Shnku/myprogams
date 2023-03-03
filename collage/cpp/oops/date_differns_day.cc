#include <iostream>
using namespace std;

enum din
{
    mon,
    tues,
    wed,
    thurs,
    fri,
    sat,
    sun
};
int mas[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class date
{
private:
    int day;
    int month;
    int year;

public:
    date() {}
    ~date() {}
    void set()
    {
        char ch;
        cout << "\nenter the date: ";
        cin >> day >> ch >> month >> ch >> year;
    }
    date friend operator-(date, date);
};

int main()
{

    return 0;
}

/*incomplete...*/
