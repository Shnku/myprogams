#include <iostream>
#include <cstring>
using namespace std;

class car
{
	char nm[20];
	int l,w,h;
	float price,tax;

public:
	void getdeta()
	{
		cout << "\nEnter car name: ";
		cin >> nm;
		cout << "Enter lwh: ";
		cin >> l >> w >> h;
		cout << "Enter price: ";
		cin >> price;
	}

	void calc_tax()
	{
		if (l >12)
			tax = price * 14/100;
		else
			tax = price * 10/100;
	}

	void display()
	{
		cout << "\nCAR NAME: "<< nm
			 << "\t " <<l <<" * "<<w<<" * "<<h
			 << "\tPrice: "<< price << "\t So tax = "<< tax
			 << "\tSo Final Price:= "<< price+tax <<endl ;
	}
};

int main()
{
	car c1,c2;

	c1.getdeta();
	c1.calc_tax();
	c1.display();
	
	c2.getdeta();
	c2.calc_tax();
	c2.display();

	return 0;
}
