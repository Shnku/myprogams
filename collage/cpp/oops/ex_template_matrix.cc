#include <iostream>
using namespace std;

template <class T>
class matrix
{
private:
    T row, col;

public:
    matrix(T r, T c);
    void setdata();
    void display();
    matrix operator+(matrix);
    matrix operator-(matrix);
    matrix operator*(matrix);
    void transporse(matrix);
};

matrix<T>::matrix(T r, T c)
{
}

void matrix<T>::setdata()
{
    // cout << "\nen row x col value : ";
    // cin >> row >> col;
}

int main()
{

    return 0;
}