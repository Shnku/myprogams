#include <iostream>
using namespace std;

int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int month_ptr;

// leap year cheaking function......
bool leap_chk(int &y)
{
    if ((y % 4 == 0 || (y % 100 == 0 && y % 400 == 0)))
    {
        //! month[1]++;
        /// this is wrong cause it increase to 29..30. month[1] in each function call when it is leap year...
        month[1] = 29;
        return true;
    }
    else
        return false; //! this is very very imp...
    // cause it returns garbage value while not leapyear....causing problem in!:= else if (leap_chk(year)==???
}

// choosing month function.......
string which_month(int month_ptr)
{
    switch (month_ptr)
    {
    case 0:
        return " jan";
        break;
    case 1:
        return " feb";
        break;
    case 2:
        return " mar";
        break;
    case 3:
        return " apr";
        break;
    case 4:
        return " may";
        break;
    case 5:
        return " june";
        break;
    case 6:
        return " july";
        break;
    case 7:
        return " aug";
        break;
    case 8:
        return " sep";
        break;
    case 9:
        return " oct";
        break;
    case 10:
        return " nov";
        break;
    case 11:
        return " dec";
        break;
    }
}

// date identyfier function......
int date_is(int no_of_day)
{
    int sum = 0, date;
    for (int i = 0; i < 12; i++)
    {
        sum = sum + month[i];
        if (no_of_day <= sum)
        {
            cout << month[i] << "-" << sum << "+" << no_of_day << "\t=> ";
            date = month[i] - (sum - no_of_day);
            month_ptr = i;
            break;
        }
    }
    return date;
}

// in range of this year? cheaking....
// using *int referance* cause we need t change year and day if they are not in range of just one year,....
void is_in_year(int &year, int &din)
{
    if (leap_chk(year)) // if (leap_chk(year))
    {
        if (din > 366)
        { // (din > 366) ? (din -= 366) && year++ : din;
            // cout << "366< " << din;
            din -= 366;
            cout << "din -366= " << din;
            year += 1;
        }
    }
    else // else if (leap_chk(year) == 0)
    {
        if (din > 365)
        { // (din > 365) ? (din -= 365) && year++ : din;
            // cout << "365< " << din;
            din = din - 365;
            cout << "din -365= " << din;
            year++;
        }
    }
}

// this is the main function..........
int main()
{
    int year, koto_din, more_din;
    cout << "\nenter the year: ";
    cin >> year;
    leap_chk(year); // cout << month[1];

    cout << "how meny days: ";
    cin >> koto_din;
    is_in_year(year, koto_din); // cout << month[1];

    cout << "\nthe date is:- " << date_is(koto_din)
         << which_month(month_ptr) << " ," << year << '\n';

lebel:
    int ch;
    cout << "\nentr choice continue: '1' :  ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "\nHow meny more_din? ";
        cin >> more_din;
        more_din += koto_din;
        is_in_year(year, more_din);

        cout << "\nthe date is:- " << date_is(more_din)
             << which_month(month_ptr) << " ," << year;

        break;
    default:
        return 0;
        break;
    }
    goto lebel;
}

/**/
/* //!........wrong and not working...........
// no_of_day counting function.........
void daycount(int no_of_day)
{
    int s = 0, date = 0, i;
    if (no_of_day < 31)
    {
        date = no_of_day;
        key = 0;
        goto lebel;
    }

    for (i = 0; i < 12; i++)
    {
        s = s + month[i];  //!s=0+31 //s=31+28=59
        if (no_of_day < s) // 33<31 no //!33<59  yes
        {
            cout << s << "-" << no_of_day;
            date = s - no_of_day; //! date= 59-33= 26
            ! this is wrong ....
            cout << " = " << date;
            key = i;
            break;
        }
    }
lebel:
    cout << "\nthe date is: " << date;
    cout << which_month(key);
    // cout << i;
}
*/
