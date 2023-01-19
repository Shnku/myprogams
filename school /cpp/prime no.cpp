//cpp to find prime no(class used............)
#include <iostream>
using namespace std;
//define the class........
class myclass{
	public:
		int x;
		int prime_no(int);
};
//body of the function of myclass class......
int myclass::prime_no(int a)
{
	int i;
	int flag;
	
	if(a==0 || a==1)
		flag= 1;

	if(a==2)
		flag= 0;
	
	for(i=2;i<a;i++){
		if(a%i==0)
			flag= 1;
	}
	return flag;
}
//main function..................
int main()
{
	myclass no;
	cout<<"en the no to check: ";
	cin>>no.x;
	
	if(no.prime_no(no.x)==1)
		cout<<"the no is ..........not prime";
	else
		cout<<"the no is ``````````````prime";
	return 0;
}
