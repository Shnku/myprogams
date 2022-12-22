#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    float num;
    char grade;

public:
    student(int a, float b, char c);
    ~student();
};

student::student(int a, float b, char c)
{
    cout << "\nconstructer called";
    roll = a;
    num = b;
    grade = c;
}

student::~student()
{
    cout << "\ndestructor called\n";
    cout<< roll <<" "<<num<<" "<<grade;
}

int main()
{
    student s1(1, 450, 'a');
    return 0;
}


