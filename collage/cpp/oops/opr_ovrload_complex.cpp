#include <iostream>
using namespace std;
class complexno
{
private:
    float real, img;

public:
    complexno() {}
    complexno(float real, float img)
    {
        this->real = real;
        this->img = img;
    }
    void set()
    {
        float a, b;
        cout << "\neh the complex no: ";
        cin >> a >> b;
        // scanf("%f %c%c %f",&a,&b);//wrong
        real = a;
        img = b;
    }
    void display()
    {
        cout << "\ncomplex no is: " << real << " +i " << img;
    }
    ~complexno() {}
    // opeartor overloadind functions....
    friend complexno operator+(complexno, complexno);
    complexno operator-(complexno);
    complexno operator*(complexno);
    complexno operator/(complexno);
};

complexno operator+(complexno n, complexno n2)
{
    // return (complexno)((n.real + n2.real), (n.img + n2.img)); //wrong
    return (complexno((n.real + n2.real), (n.img + n2.img)));
    // return complexno((n.real + n2.real), (n.img + n2.img)); //same as before not wrong..
}

complexno complexno::operator-(complexno n)
{
    return (complexno(real - n.real, img - n.img)); // uses parameterised constructor....
}

complexno complexno::operator/(complexno n)
{
    complexno temp;
    temp.real = real / n.real;
    temp.img = img / n.img;
    return temp;
}

complexno complexno::operator*(complexno n)
{
    return complexno(real * n.real, img * n.img);
}

// this is te main function.....
int main()
{
    complexno c1, c2, c3, sum, sub, mul, div;
    c1.set();
    c2.set();
    c3.set();
    sum = c1 + c2 + c3;
    sub = c1 - c2;
    div = c1 / c2;
    mul = c1 * c2 * c3;
    sum.display();
    sub.display();
    div.display();
    mul.display();
    return 0;
}