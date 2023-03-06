#include <iostream>
using namespace std;

template <typename dtyp, int row, int col>
class matrix
{
private:
    dtyp arr[row][col];

public:
    matrix();
    matrix(dtyp mat[row][col]);
    void setdata();
    void display();
    void trans();
    matrix operator+(matrix);
    matrix operator*(matrix);
    friend matrix operator-(matrix, matrix);
};

template <typename dtyp, int row, int col>
matrix<dtyp, row, col>::matrix()
{
    cout << "\nenter row X col number: ";
    cin >> row>>col;
}

int main()
{

    return 0;
}