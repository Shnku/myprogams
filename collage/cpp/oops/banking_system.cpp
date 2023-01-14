#include <iostream>
using namespace std;

class account
{
private:
    char customar_name[20];
    int ac_no;
    char ac_type[5];

public:
    void create_ac();
    void dsply_ac_detils();
    float deposit();
    float withdraw();
    void update();
    void permissiom();
};

class curr_ac : public account
{
private:
    float min_bal = 1000;
    float penalty = 500;

public:
    void min_cheaker();
};

class save_ac : public account
{
private:
    float interest;

public:
    void comp_interest();
};

int main()
{

    return 0;
}