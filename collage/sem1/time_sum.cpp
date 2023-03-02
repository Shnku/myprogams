#include <iostream>
using namespace std;
class time
{
	int hour,min,sec;
public:
	time();
	~time();
	void getdeta();
	void display();
	void sum(time,time);
};

void time::getdeta(){
	cout << "Enter hour,min,sec: ";
	cin >> hour >> min >> sec;
}

void time::display(){
	cout << hour << "H " << min << "M " << sec << "S";
}

void time::sum(time t1,time t2)
{
	sec = t1.sec + t2.sec;
	sec = sec % 60;
	min = sec / 60;

	min = min + t1.min + t2.min;
	min = min % 60;
	hour = min / 60;

	hour = hour + t1.hour + t2.hour;
}

int main()
{
	time A,B,Sum;
	A.getdeta();
	B.getdeta();
	Sum.sum(A,B);
	A.display();
	B.display();
	Sum.display();
	return 0;
}

