#include <iostream>
#include <cmath>	
using namespace std;

class triangle
{
	int a,b,c,peri;
	float area;
public:
	void getdeta(){
		cout << "enter 3 sides value: "	;
		cin >> a >> b >> c;
	}
	int perimtr(){
		peri= (a+b+c);
		return peri;
	}
	float areacal(){
		float s,m;
		s= perimtr()/2;
 	    m= s*(s-a)*(s-b)*(s-c);
		area= pow(m,0.5);
		return area;
	}
	void display(){
		cout << "sides of triangle are: " <<a<<b<<c;
		cout << "\nthe perimtr is " <<peri <<'\n'
			 << "\nthe area is: " <<area <<'\n';
			 
	}
};

int main()
{
	triangle t1,t2;
	t1.getdeta();
	t1.perimtr();
	t1.areacal();
	t1.display();

	t2.getdeta();
	t2.perimtr();
	t2.areacal();
	t2.display();

	return 0;
}
