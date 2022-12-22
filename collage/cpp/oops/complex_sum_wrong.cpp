// complex_sum wrong,cpp

#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex() {}
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << "+i" << img << '\n';
    }

    friend complex sum(complex, complex);
    ~complex() {}
};

complex sum(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return temp;
}
int main()
{
    complex firstno(2, 3), secno(5, 6);
    complex result;
    result = sum(firstno, secno);
    // cout << "sum=" << result.real << "+" << result.img << "i";//couldnot access private menbers.....
    firstno.display();
    secno.display();
    result.display();

    return 0;
}
// complex complex::sum(complex n1, complex n2)
// {
//     // return n1 + n2;
//     complex a;
//     a.real = n1.real = n2.real;
//     a.img = n1.img + n2.img;
//     return a;
// }
