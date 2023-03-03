#include <iostream>
using namespace std;

class box
{
private:
    float height, width, length;

public:
    box() {}
    ~box() {}
    box(float h, float i, float w);

    void setdata();
    void display();
    float calc_surface_area();
    float clac_voloume();
    bool cheak_cube();

    box operator++();      // pre fix
    box operator++(int x); // post fix
    // box operator++(box x);   //not works...
    friend box operator--(box &);        // pre fix
    friend box operator--(box &, int x); // post fix
    friend bool operator==(box &, box &);
    void operator=(box);
};

//.
//.............................................
// function directly details:-bellow---------------
//...........................................

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
         << length << "x" << width << "x" << height;
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

box box::operator++(int x) // post // copy current then increse then return
{
    box oldstate(*this); // first cpoy the current state //copy constructor...
    height++;
    width++;
    length++;
    return oldstate; // return the temporary object (i.e., the old state)
}

box operator--(box &temp) // pre// increase first,then  return the modified
{
    // suppose here this == temp...
    temp.height--; // increase temp as friend ..
    temp.length--;
    temp.width--;
    // return *this;   //friend func doesn't have this ..
    return temp;
}

box operator--(box &temp, int x) // x is dummy parameter..
{
    box oldState(temp); // create a temp with the current state
    temp.height--;
    temp.width--;
    temp.length--;
    return oldState; // return the temp with the old state
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

void box::operator=(box t2nd) // multiple assignment
{
    // assignment operatoe also worked when not = operator overloaded.....
    height = t2nd.height;
    width = t2nd.width;
    length = t2nd.length;
}

bool box::cheak_cube()
{
    return (height != width || width != length ? false : true);
}

// the main function body....
int main()
{
    box b1(10, 30, 20), b2(20, 50, 60), b3, b4, b5(4, 4, 4);
    b3.setdata();
    b4 = b3; // assignment operatoe also worked when not = operator overloaded.....

    cout << "\n b1 before:";
    b1.display();
    // box tmp = ++b1;
    ++b1;
    cout << "\nb1 after:";
    b1.display();
    // tmp.display();

    cout << "\n\nb2 before:---";
    b2.display();
    box tmp = b2++;
    cout << "\nb2 after:---";
    b2.display();
    tmp.display();

    cout << endl;
    cout << "\narea of box b3: " << b3.calc_surface_area();
    cout << "\nvoloume oh box b4: " << b4.clac_voloume();
    cout << "\n"
         << (b5.cheak_cube() ? "b5 is a cube" : "not a cube");
    cout << "\n"
         << (b3 == b4 ? "b3 & b4 are same box " : "different box");
    return 0;
}

/*output
enter box length x width x height: 1 2 3

 b1 before:
30x20x10
b1 after:
31x21x11

b2 before:---
50x60x20
b2 after:---
51x61x21
50x60x20

area of box b3: 22
voloume oh box b4: 6
b5 is a cube
b3 & b4 are same box
*/
