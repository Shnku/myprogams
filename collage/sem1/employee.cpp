#include <iostream>
using namespace std;

class employee
{
	char nm[20];
	float basic_sal, DA, HRA;
	int MD = 500;
	float total_sal;

public:
	void getdeta(){
		cout << "enter name: ";
		cin >> nm;
		cout << "entr basic_sal: ";
		cin >> basic_sal;
	}

	float calc_da(){
		DA = basic_sal * 3/100;
		return DA;
	}

	float calc_HRA(){
		HRA = basic_sal * 12/100;
		return HRA;
	}

	float calc_total(){
		total_sal = basic_sal + DA + HRA + MD;
		return total_sal;
	}

	void display(){
		cout <<"\nEMPLOYEE NAME:= "<<nm;
		cout <<"\n BASIC= " <<basic_sal 
			 <<"\t DA= " << DA
			 <<"\t HRA= "<< HRA
			 <<"\t MD= " << MD
			 <<"\tTOTAL= "<< total_sal;
	}
};

int main()
{
	employee e1,e2;

	e1.getdeta();
	e1.calc_da();
	e1.calc_HRA();
	e1.calc_total();
	e1.display();

	return 0;
}