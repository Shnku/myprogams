#include <iostream>
#include <cstring>
using namespace std;

// char sentense[5][30] = {"this is the sentense"};
char sentense[10][20];
int main()
{
    // cout << sentense[0][0] << '\n';
    // cout << sentense[0];
    // cout << sizeof(sentense);
    char s[100];
    cout << "\nentr the sentense: ";
    // cin >> s; //!cin only enters word ...brakes after space
    cin.getline(s, 100);

    for (int i = 0; i < s[i] != '\0'; i++)
    {
        cout << s[i];
    }

    // fflush(stdin);//?also woek without it...

    /* using string object.......*/
    string str;
    cout << "\n\nentr the sentense: ";
    // cin >> str;//!cin only enters word ...brakes after space
    getline(cin, str);

    // for (int i = 0; i < sizeof(str); i++)//!causing error
    // {
    //     cout << str[i];
    // }
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        cout << str[i];
    }

    cout << endl
         << sizeof(str) << '\n'
         << str.capacity() << '\n'
         << str.size() << '\n'
         << str.length() << '\n';
    // for (int i = 0; i < sizeof(s); i++)
    // {
    //     cout << s[i];
    // }
    // for (auto i : s)//?use in predefined array..
    //     cout << i;

    return 0;
}