#include <iostream>
using namespace std;

class Shape
{
protected:
    int a;
    int b;

public:
    void get_data(int n, int m)
    {
        a = n;
        b = m;
    }
};

class Rectangle : public Shape
{
public:
    int rect_area()
    {
        int result = a * b;
        return result;
    }
};

class Triangle : public Shape
{
public:
    int triangle_area()
    {
        float result = 0.5 * a * b;
        return result;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    int len, wid, base, high;

    cout << "Enter the len and wid of a rectangle: ";
    cin >> len >> wid;
    r.get_data(len, wid);

    float m = r.rect_area();
    cout << "Area of the rectangle is: " << m << endl;

    cout << "Enter the base and high of the triangle: ";
    cin >> base >> high;
    t.get_data(base, high);

    float n = t.triangle_area();
    cout << "Area of the triangle is : " << n << endl;

    return 0;
}

/*
Enter the len and wid of a rectangle: 4
5
Area of the rectangle is: 20
Enter the base and high of the triangle: 3
2
Area of the triangle is : 3
*/
