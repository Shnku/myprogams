#include <iostream>
using namespace std;
class timemy
{
	int hour, min, sec;

public:
	timemy() {}
	~timemy() {}
	void getdeta();
	void display();
	void sum(timemy, timemy);
};

void timemy::getdeta()
{
	cout << "Enter hour,min,sec: ";
	cin >> hour >> min >> sec;
}

void timemy::display()
{
	cout << hour << " : " << min << " : " << sec << " S";
}

void timemy::sum(timemy t1, timemy t2)
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
	timemy x, y, result;
	x.getdeta();
	y.getdeta();
	result.sum(x, y);
	x.display();
	cout << endl;
	y.display();
	cout << endl;
	result.display();
	cout << endl;
	return 0;
}
