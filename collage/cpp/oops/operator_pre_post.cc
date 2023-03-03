#include <iostream>
using namespace std;

class box
{
private:
    float height, width, length;

public:
    box() {}
    box(float, float, float);
    void display();
    box operator++();          // pre fix
    box operator++(int dummy); // post fix
    // box operator++(box dummy);   //not works...
    friend box operator--(box &);            // pre fix
    friend box operator--(box &, int dummy); // post fix
};

box::box(float h, float w, float i)
{
    this->height = h;
    this->length = i;
    this->width = w;
}
void box::display()
{ // display height, width, length,,..
    cout << "\n"
         << height << ", " << width << ", " << length;
}

box box::operator++() // pre
{                     // increase first return modified
    height++;         // first increase the currect state...
    width++;
    length++;
    return *this; // then return the change value
}

box box::operator++(int dummy) // post    // copy current then increse then return
{
    box oldstate(*this); // first cpoy the current state //copy constructor...
    // oldstate.height++;   // then increase
    // oldstate.length++;
    // oldstate.width++;
    // /*this = oldstate;
    // return *this; // then return the incressed value..

    height++;
    width++;
    length++;
    return oldstate; // return the temporary object (i.e., the old state)
}

box operator--(box &current) // pre// increase first return modified
{
    // have to pass a copy of current state as this is a friend func we can't pass vy vlu directly...
    current.height--; // increase current as friend ..
    current.length--;
    current.width--;
    // return *this;   //friend func doesn't have this ..
    return current;
}

box operator--(box &current, int dummy) // dummy is dummy parameter..
{
    // current.height--; // increase current as friend ..
    // current.length--;
    // current.width--;
    // return current;
    box oldState(current); // create a current with the current state
    current.height--;
    current.width--;
    current.length--;
    return oldState; // return the current with the old state
}

// now thw main function.....
int main()
{
    box b1(10, 20, 30), b2(4, 5, 6), b3(b1), b4;
    b4 = b1; // in b3(b1)...default copy constructor called...
    // and = can be done without overloading it...overloading need for multiple assignment....
    int x = 10, y;
    cout << "\nb1 before ...post... incriment x= : " << x;
    b1.display();
    y = x++;
    box temp = b1++;
    cout << "\nb1 after ...post... increase: "
         << "x= " << x << " , y= " << y;
    cout << "\n...........b1= ......";
    b1.display();
    cout << "\n..........temp= .....";
    temp.display();

    int p = 10, q;
    cout << "\n\nb1 before ...pre... incriment p= : " << p;
    b2.display();
    q = ++p;
    box temp2 = ++b2;
    cout << "\nb1 after ...pre... increase: "
         << "p= " << p << " , q= " << q;
    cout << "\n...........b2= ......";
    b2.display();
    cout << "\n..........temp2= .....";
    temp2.display();

    return 0;
}


/*output

b1 before ...post... incriment x= : 10
10, 20, 30
b1 after ...post... increase: x= 11 , y= 10
...........b1= ......
11, 21, 31
..........temp= .....
10, 20, 30

b1 before ...pre... incriment p= : 10
4, 5, 6
b1 after ...pre... increase: p= 11 , q= 11
...........b2= ......
5, 6, 7
..........temp2= .....
5, 6, 7

*/