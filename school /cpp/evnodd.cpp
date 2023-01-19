//cpp to find evn odd of a no..........(using c;lasss.)
#include <iostream>
using namespace std;

class myclass{
	public:
		int x;
		int evn_odd(int);
};
//body of class function........
int myclass::evn_odd(int no)
{
	int yes=1;
	if(no%2==0)
		yes=1;
	else
		yes=0;
	return yes;
}
//the main function.........
int main()
{
	myclass number;
	cout<<"ner the no to check: ";
	cin>>number.x;
	if(number.evn_odd(number.x)==1)
		cout<<"the no is even;";
	else
		cout<<"the nois odd;";
}
