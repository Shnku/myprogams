//a cpp program to finr the factorial of a no....
#include <iostream>
using namespace std;
//class definition..............
class myclass{
	public:
		int x;
		int factorial(int);
};
// class function body..........
int myclass::factorial(int x)
{
	int i, sum=1 ,k=1;
	for(i=1;i<x;i++)
	{
		k= k*i;
	}
	sum=k*x;
	return sum;
}
//the main function............
int main()
{
	myclass nth;
	cout<<"en the nth turm...  ";
	cin>>nth.x;
	cout<<"the factorial is :  "<< nth.factorial(nth.x);
	return 0;
}
