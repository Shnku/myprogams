//cpp to reverse a no..........(using c;lasss.)
#include <iostream>
using namespace std;
//class defination............
class myclass{
	public:
		int x;
		int reverse(int);
};
//body of class function........
int myclass::reverse(int number)
{
	int reminder,sum=0;
	while(number!=0)
	{
		reminder=number%10;
		sum=sum*10+reminder;
		number=number/10;
	}
	return sum;
}
//the main function.............
int main()
{
	myclass no;
	cout<<"en the no: ";
	cin>>no.x;
	cout<<"the reverse of the no is:-  "<<no.reverse(no.x);
	return 0;
}
