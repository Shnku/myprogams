#include <iostream>
#include <cstring>

using namespace std;
class employee
{
private:
    float sal;
    char nm[50];

public:
    int id;
    employee() {}
    ~employee() {}
    void set()
    {
        int id;
        float s;
        // char *np;//causing problem,,
        char *np = new char[50]; // allocate memory for name
        cout << "\nen the details: id sal nm____: ";
        cin >> id >> s >> np;
        this->id = id;
        this->sal = s;
        strcpy(nm, np); // nm[50] = *np;
        delete[] np;    // free memory allocated for name
    }
    void display()
    {
        cout << "\nid: " << id;
        cout << "\nsal: " << sal;
        cout << "\nname: " << nm;
    }
    employee &max_salary(employee &e)
    {
        if (sal > e.sal)
            return *this;
        else
            return e;
        /* there is a problem with the function max_salary. When it returns a reference to an employee object,
        it is possible for that reference to become invalid if the referenced object goes out of scope.*/
        //?fixed when use &e.
        /*By using employee &e as a parameter, you are passing a reference to the original object, which allows the function to modify the original object.
        Therefore, using employee& max_salary(employee &e) instead of employee& max_salary(employee e) would fix the issue.*/
    }
};

int main()
{
    employee e1;
    e1.set();

    employee e2, max;
    e2.set();

    e1.display();
    e2.display();

    cout << "\ncomplring the sallary of e1 with e2...\n";
    max = e1.max_salary(e2);
    max.display();

    // cout << this->e1.id; //gives error..?
    return 0;
}

/*
output
*/
/*

en the details: id sal nm____: 1
45000
shnku

en the details: id sal nm____: 2
56000
ehsk

id: 1
sal: 45000
name: shnku
id: 2
sal: 56000
name: ehsk
complring the sallary of e1 with e2...

id: 2
sal: 56000
name: ehsk
*/
