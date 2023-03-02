#include <iostream>
using namespace std;

class complex
{
	int real, img;

public:
	complex();
	complex(int x, int y)
	{
		real = x;
		img = y;
	}
	complex(complex &x)
	{
		real = x.real;
		img = x.img;
	}
	friend complex substract(complex, complex);
	void display();
	~complex();
};

complex substract(complex a,complex b){
	complex temp;
	
}
