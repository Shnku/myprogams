#include <iostream>
using namespace std;

int sqfnc(int no){
	cout<<"the squre is: "<< no*no << endl;
	return no*no;
}

int main()
{
	cout<<"en the no: ";
	int num;
	cin>>num;
	sqfnc(num);
	cout<<"out return  .. "<< sqfnc(num);
}
