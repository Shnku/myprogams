#include <iostream>
using namespace std;

class complex
{
	int a,b;
public:
	complex();
	complex(int x,int y){ a=x; b=y;}
	complex(complex &x){ a=x.a; b=x.b;}
	friend complex substract(complex,complex);
	void display();
	~complex();
};

