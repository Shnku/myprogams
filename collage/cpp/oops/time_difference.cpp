#include <iostream>
using namespace std;
class calctime
{
private:
    int hour;
    int min;
    int sec;

public:
    calctime() {}
    void set()
    {
        cout << "en the thim in hms format: ";
        cin >> hour >> min >> sec;
        // int h, m, s;
        // cin >> h >> m >> s;
        // hour = h;
        // min = m;
        // sec = s;
    }
    ~calctime() {}
    calctime difference(calctime);
    calctime operator-(calctime); // as same as before...
    void display();
};

calctime calctime::difference(calctime n)
{
    calctime res;
    if (sec < n.sec)
    {
        sec = sec + 60;
        min = min - 1;
    }
    res.sec = sec - n.sec;
    if (min < n.min)
    {
        min = min + 60;
        hour = hour - 1;
    }
    res.min = min - n.min;
    if (hour < n.hour)
    {
        hour = hour - 1;
    }
    res.hour = hour - n.hour;
    return res;
}

calctime calctime::operator-(calctime n)
{
    calctime res;
    if (sec < n.sec)
    {
        sec = sec + 60;
        min = min - 1;
    }
    res.sec = sec - n.sec;
    if (min < n.min)
    {
        min = min + 60;
        hour = hour - 1;
    }
    res.min = min - n.min;
    if (hour < n.hour)
    {
        hour = hour - 1;
    }
    res.hour = hour - n.hour;
    return res;
}

int main()
{
    calctime t1, t2, res, res2;
    t1.set();
    t2.set();

    cout << "\ngiven times are.........\n";
    t1.display();
    res = t1.difference(t2);
    res2 = t1 - t2;
    t1.display();
    t2.display();

    cout << "\ndifference between times are.........\n";
    res.display();

    cout << "\nusing opeartor overload...........\n";
    res2.display();
    return 0;
}

void calctime::display()
{
    cout << "time= " << hour << ":" << min << ":" << sec << endl;
}

//
//
/********************************************************/
// this is the output........
/********************************************************/
/*
?given times are.........
time= 10:20:30
time= 10:20:30
time= -2:-20:-30
?difference between times are.........
time= 12:40:60
?using opeartor overload...........//?same as func call...
time= 12:40:60
*/

//
// output 2...//!previous was wrong...
/*
?given times are.........
time= 10:20:30
time= 10:20:30
time= -2:20:30
?difference between times are.........
time= 12:0:0
*/

//
//! modified version of no 1....also wrong....
/*
?given times are.........
time= 10:20:30
time= 10:20:30
time= -2:-19:-40
?difference between times are.........
time= 12:39:70 //!wrong...
*/

//
//! modified version of no 2.......
/*
?given times are.........
time= 10:20:30
time= 10:20:30
time= -2:19:40
?difference between times are.........
time= 12:0:50 //!seems ok..
*/

/*
//!this is the normal version,,
?given times are.........
time= 10:23:16
time= 9:82:76
time= 5:56:40
?difference between times are.........
time= 4:26:36
*/
