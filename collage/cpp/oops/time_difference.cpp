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
        int h, m, s;
        cin >> h >> m >> s;
        hour = h;
        min = m;
        sec = s;
    }
    ~calctime() {}
    calctime difference(calctime);
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

int main()
{
    calctime t1, t2, res;
    t1.set();
    t2.set();
    t1.display();
    res = t1.difference(t2);
    t1.display();
    t2.display();
    res.display();
    return 0;
}

void calctime::display()
{
    cout << "calctime= " << hour << ":" << min << ":" << sec << endl;
}