#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class shape2d
{
protected:
    T dimension_x, dimension_y;

public:
    shape2d(T x, T y = 0)
    {
        dimension_x = x;
        dimension_y = y;
    }
    T perimeter() { return (2 * (dimension_x + dimension_y)); }
    T area() { return dimension_x * dimension_y; }
};

template <typename T>
class shape3d : public shape2d<T>
{
protected:
    T dimension_z;

public:
    shape3d(T x, T y = 0, T z = 0) : shape2d<T>(x, y)
    {
        // shape2d<T>::dimension_x = x; //giving erreor no matching function.
        // shape2d<T>::dimension_y = y;
        dimension_z = z;
    }
    T volume()
    {
        return (shape2d<T>::dimension_x * shape2d<T>::dimension_y * dimension_z);
    }
};

template <typename T>
class rectangle : public shape2d<T>
{
public:
    rectangle(T len, T wid) : shape2d<T>(len, wid) {}
};

template <typename T>
class square
{
public:
    square(T len) : shape2d<T>(len, len) {}
};

template <typename T>
class triangle : public shape2d<T>
{
    T c;

public:
    triangle(T a, T b, T c) : shape2d<T>(a, b) { this->c = c; }
    triangle(T a, T b) : shape2d<T>(a, b) {}
    T perimeter() { return shape2d<T>::dimension_x + shape2d<T>::dimension_y + c; }
    T area()
    {
        T *s = new (T);
        T *ar = new (T);
        (*s) = perimeter() / 2;
        (*ar) = sqrt((*s) * ((*s) - shape2d<T>::dimension_x) * ((*s) - shape2d<T>::dimension_y) * ((*s) - c));
        return (*ar);
        delete (s, ar);
    }
};

template <typename T>
class Right_triangle : public triangle<T>
{
public:
    Right_triangle(T hei, T base) : triangle<T>(hei, base) {}
    T perimeter()
    {
        T *tmp = new (T);
        (*tmp) = sqrt(pow(triangle<T>::dimension_x, 2) + pow(triangle<T>::dimension_y, 2));
        return ((shape2d<T>::perimeter() / 2) + (*tmp));
        delete (tmp);
    }
    T area()
    {
        return shape2d<T>::area() / 2;
    }
};

template <typename T>
class circle : public shape2d<T>
{
public:
    circle(T r) : shape2d<T>(r) {}
    T perimeter() { return M_PI * 2 * shape2d<T>::dimension_x; }
    T area() { return M_PI * pow(shape2d<T>::dimension_x, 2); }
};

template <typename T>
class cubeoid : public shape3d<T>
{
public:
    cubeoid(T a, T b, T c) : shape3d<T>(a, b, c) {}
};

template <typename T>
class cube : public cubeoid<T>
{
public:
    cube(T a) : cubeoid<T>(a, a, a) {}
};

template <typename T>
class sphere : public shape3d<T>
{
public:
    sphere(T r) : shape3d<T>(r, r, r) {}
    T volume() { return 4 / 3 * M_PI * pow(shape3d<T>::volume(), 2); }
};

//
/*--------------------------------------------------*/
/*____this is the main_______*/
int main()
{
    Right_triangle<int> r1(4, 3);
    cout << r1.area() << endl;
    cout << r1.perimeter();

    triangle<float> t1(4, 4, 2);
    cout << "\narea: " << t1.area();
    cout << "\nprri: " << t1.perimeter();

    sphere<float> s(3);
    cout << "\nvolume is: " << s.volume();

    circle<float> c(3);
    cout << "\nperimeter of circle: " << c.perimeter();
    cout << "\narea of circle: " << c.area();

    return 0;
}
