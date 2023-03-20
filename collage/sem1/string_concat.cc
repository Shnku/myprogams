#include <iostream>
using namespace std;

class mystring
{
    char str[30];

public:
    mystring();
    mystring(char s[]);
    void show();
    friend mystring operator+(mystring, mystring);
    ~mystring() {}
};

mystring::mystring()
{
    str[0] = '\0';
}

mystring::mystring(char s[])
{
    for (int i = 0; s[i]; i++)
        str[i] = s[i]; // str[i] = *(s + i);
}

void mystring::show()
{
    cout << str << endl;
}

mystring operator+(mystring s1, mystring s2)
{
    int i = 0;
    mystring s;
    for (i = 0; i < s1.str[i] != '\0'; i++)
        s.str[i] = s1.str[i];
    for (int j = 0; j < s2.str[j] != '\0'; j++)
        s.str[i++] = s2.str[j];
    s.str[i] = '\0';
    return s;
}

int main()
{
    mystring a("this is ");
    mystring b, c;
    b = "the sentense.";
    c = a + b;
    a.show();
    b.show();
    c.show();

    return 0;
}
