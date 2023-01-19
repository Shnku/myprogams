#include <iostream>
#define pi 22/7
using namespace std;
//class define...........
class circle{
	public:
		int x;
		void input(double);
		double area(double);
};
//finction body;...........
void circle::input(double a){
	cin<<a;
	a=x;
}
double circle::area(double p){
	return p*p*pi;
}
//the main function........
int main()
{
	circle rad;
	cout<<"en the ব্যাসার্ধ ঃ ";
	cin>>rad.x;
	cout<<"the area of the circle is: "<<rad.area(rad.x);
}
