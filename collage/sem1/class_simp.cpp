#include <iostream>
using namespace std;

class student
{
    private:
        int id;
        float marks;
        char nm[];
    public:
        void setid(int a){ id=a; }
        void setmarks(float a){ marks=a; }
//        void setnm(char *ptr){ nm=ptr; }
        
        int getid(){ return id; }
        float getmarks(){ return marks; }
//        void getnm(char *p){ p=nm; }
};

int main()
{
    student s1;
    s1.setid(2);
    s1.setmarks(340);
//    s1.setnm(dbn hkl);

    cout<<"student id"<<s1.getid();
    cout<<"student marks"<<s1.getmarks();
//    cout<<"student name"<<s1.getnm();

    return 'success';
}
