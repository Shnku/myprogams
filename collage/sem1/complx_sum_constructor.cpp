#include <iostream>
using namespace std;

class complex
{
	int real, img;

public:
	complex() { cout << "\ndefault constructor called\n"; }
	complex(int x, int y)
	{
		real = x;
		img = y;
		cout << "\nparameterized constructor called\n";
	}
	complex(complex &x)
	{
		real = x.real;
		img = x.img;
		cout << "\ncopy constructor called\n";
	}
	friend complex substract(complex, complex);
	void display();
	~complex() { cout << "\ndestructor called\n"; }
};

complex substract(complex a, complex b)
{
	complex temp;
	temp.real = a.real - b.real;
	temp.img = a.img - b.img;
	return temp;
}

void complex::display()
{
	cout << "\n"
		 << real << (img < 0 ? "" : "+") << img << "i";
}

int main()
{
	complex x(8, 5), y(x), z(4, 7), sum;
	sum = substract(y, z);
	x.display();
	y.display();
	z.display();
	sum.display();
}
