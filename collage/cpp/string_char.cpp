#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[50];
    string nm2;

    // cout << "en the string: ";
    // cin >> name;
    // cout << "en ster type string: ";
    // cin >> nm2;
    // // getline(cin, nm2);
    // cout << "\n\ndisplay char : " << name << '\n'
    //      << "disp string: " << nm2 << '\n';

    string s;
    cout << "\nen string: ";
    getline(cin, s);
    // cin.getline(s); // error
    cout << "\ndisplay: " << s;

    char c[40];
    cout << "\nen char: ";
    // getline(cin, c); //not valid...
    // getline(c, 40); //std mode not specified...
    cin.getline(c, 40);
    cout << "\nchar= " << c;

    return 0;
}