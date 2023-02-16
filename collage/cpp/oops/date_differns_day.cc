#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date() {}
    ~date() {}
    date friend operator-(date,date);
};

int main()
{

    return 0;
}