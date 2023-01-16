/*polar co-ordinate to cartsian experiment sum...*/
#include <iostream>
#include <cmath>
using namespace std;
class cartesian;
/*to fix cartesian not declear error as program flows top to bottom.... we create cartesian before define what cartesian is */

// polar class.....
class polar
{
private:
    float rdus, angl;

public:
    void set_rdus(float r) { rdus = r; }
    void set_angl(float a) { angl = a; }
    void setvalue()
    {
        cout << "en (r,0) value: ";
        cin >> rdus >> angl;
    }
    void disp_polar()
    {
        cout << "polar co-ordinate(r,0)= ("
             << rdus << "," << angl << ")\n";
    }
    cartesian to_cartesian(polar x); // decleration..
    /*givs error cartesian not declear
     {
         cartesian t; //goto line 3..
         t.set_x(x.rdus * cos(x.angl));
         t.set_y(x.rdus * sin(x.angl));
         t.disp_cartesian();
     };
    */
    /*error...
        // void to_cartesian(polar b)
        // {
        //     cartesian temp;
        //     temp.x = b.rdus * cos(b.angl);
        //     temp.y = b.rdus + sin(b.angl);
        //     temp.disp_cartesian();
        // }
    */
};

// general cordinate system class...
class cartesian
{
private:
    float x, y;

public:
    void set_x(float x) { this->x = x; }
    void set_y(float y) { this->y = y; }
    void setvalue()
    {
        cout << "en (x,y) value: ";
        cin >> x >> y;
    }
    void disp_cartesian()
    {
        cout << "cartasian co-ordinate(x,y)= ("
             << x << "," << y << ")\n";
    }
    polar to_polar(cartesian n);
    friend polar operator+(polar, polar);
    /*
    polar to_polar(cartesian n) // alraady declered here..
    {
        polar t;
        t.set_rdus(sqrt(n.x * n.x + n.y * n.y));
        t.set_angl(atan(n.y / n.x));
        // t.disp_polar();
        return t;
    };
    */
    // polar operator+(polar t); // to add two co-ordinate...
    /*error...
        // void to_poar(cartesian a)
        // {
        //     polar temp;
        //     temp.rdus = sqrt(a.x * a.x + a.y * a.y);
        //     temp.angl = atan(a.y / a.x);
        //     temp.disp_polar();
        // }
    */
};

// functions definitions....
/*....wrong....
polar cartesian::operator+(polar t)
{
    polar temp;
    temp = temp.to_cartesian(temp);
    t = t.to_cartesian(t);
    temp.x = x + t.x;
    temp.y = y + t.y;
    temp=temp.to_polar(temp);
}
*/

polar operator+(polar a, polar b)
{
    cartesian t, p, q;
    p = a.to_cartesian(a);
    q = b.to_cartesian(b);
    t.x = p.x + q.x;
    t.y = q.y + p.y;
    return t.to_polar(t);
}

cartesian polar::to_cartesian(polar x)
{
    cartesian t;
    t.set_x(x.rdus * cos(x.angl));
    t.set_y(x.rdus * sin(x.angl));
    // t.disp_cartesian();
    return t;
}
/* .if commented
..giving error as already declear+definition in
.......line 64...to ...70 */
polar cartesian::to_polar(cartesian n)
{
    polar t;
    t.set_rdus(sqrt(n.x * n.x + n.y * n.y));
    t.set_angl(atan(n.y / n.x));
    // t.disp_polar();
    return t;
}

// this is the main function.......
int main()
{
    int input;
again_input:
    cout << "enter what to perform: " << '\n'
         << "1 to c-to-p | 2 to p-to-c \n"
         << "3 to add two polar \n"
         << ":->";
    cin >> input;
    switch (input)
    {
    case 1:
        cartesian no;
        polar n;
        no.setvalue();
        no.disp_cartesian();
        n = no.to_polar(no);
        n.disp_polar();
        break;
    case 2:
        polar po;
        cartesian p;
        po.setvalue();
        po.disp_polar();
        p = po.to_cartesian(po);
        p.disp_cartesian();
        break;
    case 3:
        polar no1, no2, sum;
        no1.setvalue();
        no2.setvalue();
        sum = no1 + no2;
        sum.disp_polar();
        break;
    default:
        cout << "en proper choice\n";
        goto again_input;
    }
    return 0;
}