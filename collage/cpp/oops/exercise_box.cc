#include <iostream>
using namespace std;

class box
{
private:
    float height, width, length;

public:
    box() {}
    box(float h, float i, float w) {}
    ~box() {}
    void setdata();
    void display();
    float calc_surface_area();
    float clac_voloume();
    box operator++();      // pre fix
    box operator++(int x); // post fix
    // box operator++(box x);   //not works...
    friend box operator--(box &);        // pre fix
    friend box operator--(box &, int x); // post fix
    friend bool operator==(box &, box &);
    // box operator=(box);
    bool cheak_cube();
};

box::box(float h, float i, float w)
{ // parametrized constructor...
    this->height = h;
    this->width = w;
    this->length = i;
}

void box::setdata()
{ // explicitly set values without constructor..
    cout << "\nenter box length x width x height: ";
    cin >> length >> width >> height;
}

void box::display()
{ // display height, width, length,,..
    cout << "\n"
         << length << "x" << width << "x" << height
         << '\n';
}

float box::calc_surface_area()
{
    return 2 * (height * width + width * length + length * height);
}

float box::clac_voloume()
{
    return height * width * length;
}

box box::operator++() // pre
{                     // increase first return modified
    height++;         // first increase the currect state...
    width++;
    length++;
    return *this; // then return the change value
}

box box::operator++(int x) // post
{                          // copy current then increse then return
    box temp(*this);       // first cpoy the current state //copy constructor...
    temp.height++;         // then increase
    temp.length++;
    temp.width++;
    return temp; // then return the incressed value..
}

box operator--(box &temp) // pre// increase first return modified
{                         // have to pass a copy of current state as this is a friend func we can't pass vy vlu directly...
    temp.height++;        // increase temp as friend ..
    temp.length++;
    temp.width++;
    // return *this;   //friend func doesn't have this ..
    return temp;
}

box operator--(box &temp, int x) // x is dummy parameter..
{
    temp.height++; // increase temp as friend ..
    temp.length++;
    temp.width++;
    return temp;
}

bool operator==(box &b1, box &b2)
{
    if (b1.height == b2.height &&
        b1.width == b2.width &&
        b1.length == b2.length)
        return true;
    else
        return false;
}

// box box::operator=(box t2nd)
// {
//     height = t2nd.height;
//     width = t2nd.width;
//     length = t2nd.length;
// }

bool box::cheak_cube()
{
    return (height == width == length ? true : false);
}

// the main function body....
int main()
{
    box b1(10, 30, 20), b2(20, 50, 60), b3, b4;
    b3 = b1;
    return 0;
}
