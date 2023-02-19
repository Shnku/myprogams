#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    float marks;
    char name[10];
public:
    student();
    ~student();
};

student::student()
{
    cout<<"constructer called"<<endl;
}

student::~student()
{
    cout<<"desttructer called"<<endl;
}


int main()
{
    student s1; //if commented then couldn't call constructer or destructer
    return 11;
}
