#include <iostream>
using namespace std;

class Shape
{
public:
    int a;
    int b;
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
    int length, breadth, base, height;

    cout << "Enter the length and breadth of a rectangle: ";
    cin >> length >> breadth;
    r.get_data(length, breadth);

    float m = r.rect_area();
    cout << "Area of the rectangle is: " << m << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    t.get_data(base, height);

    float n = t.triangle_area();
    cout << "Area of the triangle is : " << n << endl;

    return 0;
}

/*
Enter the length and breadth of a rectangle: 4
5
Area of the rectangle is: 20
Enter the base and height of the triangle: 3
2
Area of the triangle is : 3
*/
