// succesfullde.
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "en the range of the: ";
	cin >> n;
	cout << endl;

	// upper pyramid..
	// for (int i = 1; i <= n; i++) // wrong
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i; j <= n; j++)
		{
			cout << "_";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << k;
		}
		for (int l = 1; l <= i - 1; l++)
		{
			cout << l;
		}
		cout << "\n";
	}
	cout << endl;
	//  down pyranid....
	// for (int i = 2; i <= n; i++)
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "_";
		}
		for (int k = i; k <= n; k++)
		{
			cout << k;
		}
		for (int k = i; k <= n - 1; k++)
		{
			cout << k;
		}
		cout << endl;
	}
}
