#include <iostream>
using namespace std;
//the class..........
class palindrome{
	public:
		int x;
		int ckeck(int);
};
//function body.....
int palindrome::ckeck(int no)
{
	int sum=0, r,q;
	int flag;
	q=no;
	while(q!=0){
		r=q%10;
		sum=sum*10+r;
		q=q/10;
	}
	if(sum==no)
		flag=1;
	else 
		flag=0;
	
	return flag;
}
//min function.....
int main()
{
	palindrome n;
	cout<<"en tjhe no.. : ";
	cin>>n.x;
	if(n.ckeck(n.x)==1)
		cout<<"this is palindrome;";
	else
		cout<<"not palindrome;";
}
