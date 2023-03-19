#include <iostream>
#include <cstring>
using namespace std;

class mystring
{
    char str[30];
    public:
        mystring();
        mystring(char *s);
        void show();
        friend mystring operator+(mystring,mystring);
        ~mystring(){}
};

mystring::mystring(){ str[0]='\0'}
mystring::mystring(char *s) {
    for(i = 0; i < strlen(s); i++)
        str[i]=*(s+i);
}


int main()
{
    
    return 0;
}
