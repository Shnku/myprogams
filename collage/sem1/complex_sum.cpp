#include <iostream>
using namespace std;

class complex
{
	int real, img;

public:
	void getdeta()
	{
		cout << "Enter the number: ";
		cin >> real >> img;
	}
	void display()
	{
		cout << '\n'
		<< real << (img < 0 ? "" : "+") << img << "i";
	}

	void addition(complex x, complex y)
	{
		this.real = x.real + y.real;
		this.img = x.img + y.img;
	}

 complex addition (complex c)
 {
  complex x;
  x.real=this.real + c.real;
  x.img=this.img + c.img;
  return x;
 }
};

int main()
{
	complex c1, c2, sum;
	c1.getdeta();
	c2.getdeta();
	sum.addition(c1, c2);
	c1.display();
	c2.display();
	sum.display();
	return 0;
}
