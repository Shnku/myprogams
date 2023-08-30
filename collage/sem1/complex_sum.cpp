#include <iostream>
using namespace std;

class complex
{
	int a, b;

public:
	void getdeta()
	{
		cout << "Enter the number: ";
		cin >> a >> b;
	}
	void display()
	{
		cout << '\n'
			 << a << (b < 0 ? "" : "+") << b << "i";
	}

	void addition(complex x, complex y)
	{
		a = x.a + y.a;
		b = x.b + y.b;
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
