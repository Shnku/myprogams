#include <iostream>
using namespace std;

template <typename type, int row, int col>
class matrix
{
private:
    type arr[row][col];

public:
    matrix() {}
    // matrix(type mat[row][col]);
    // matrix(int, int);
    void setdata();
    void display(string);
    void trans();
    matrix operator+(matrix);
    matrix operator*(matrix);
    friend matrix operator-(matrix, matrix);
};

/*

we cant do that cause.....
To Create a 3x3 matrix of integers we use...
todo: Matrix<int, 3, 3> mat1;
                  |   |
actually..we seted the roe and coloumn here

*/
// template <typename type, int row, int col>
// matrix<type, row, col>::matrix()
// {
//     cout << "\nenter row X col number: ";
//     cin >> row >> col; //!wrong...overload issue..cause row and col defined in the template..
// }

// template <typename type, int row, int col>
// matrix<type, row, col>::matrix(int row, int col)
// {
//     this->row = row;
//     this->col = col;
// }
//

template <typename type, int row, int col>
void matrix<type, row, col>::setdata()
{
    cout << "\nenter" << row << "x" << col << " matrix data\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

template <typename type, int row, int col>
void matrix<type, row, col>::display(string nm)
{
    cout << nm << " matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "  " << arr[i][j];
        }
        cout << '\n';
    }
}

template <typename type, int row, int col>
void matrix<type, row, col>::trans()
{
    matrix<type, row, col> temp;
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            temp.arr[j][i] = this->arr[i][j];
        }
    }
    // this->arr = temp.arr; //not valid..
    *this = temp; // just like.... temp1 = temp2;..
    cout << "\nperforming transporse...\n";
}

template <typename type, int row, int col>
matrix<type, row, col> matrix<type, row, col>::operator+(matrix<type, row, col> temp)
{
    matrix<type, row, col> result_is;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result_is.arr[i][j] = arr[i][j] + temp.arr[i][j];
        }
    }
    return result_is;
}

template <typename type, int row, int col>
matrix<type, row, col> matrix<type, row, col>::operator*(matrix<type, row, col> a)
{
    matrix<type, row, col> result_is;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result_is.arr[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                result_is.arr[i][j] += arr[i][k] * a.arr[k][j];
            }
        }
    }
    return result_is;
}

template <typename type, int row, int col>
matrix<type, row, col> operator-(matrix<type, row, col> a, matrix<type, row, col> b)
{
    matrix<type, row, col> result_is;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result_is.arr[i][j] = a.arr[i][j] - b.arr[i][j];
        }
    }
    return result_is;
}

int main()
{
    matrix<int, 3, 3> mat1, mat2, m3;
    mat1.setdata();
    // mat2 = mat1;
    // mat1.display("mat1 before");
    // mat1.trans();
    // mat1.display("mat1 after");
    // mat2.display("mat2");

    // m3 = mat1 + mat2;
    // m3.display("m3");

    matrix<float, 3, 4> mat4, mat5;
    // mat4.setdata();
    // mat4 = m3;          // this giving error
    // mat4 = mat1 - mat2; // also gives erroe... they need to be same size..

    // matrix<float, 3, 3> mat6, mat7, m8;
    matrix<int, 3, 2> mat6, mat7, m8;
    mat6.setdata();
    // mat7.setdata();
    // // mat7 = mat4 * mat6; // error..
    // m8 = mat7 * mat6;
    // mat6.display("mat6");
    // mat7.display("mat7");
    // m8.display("m8 ");

    // m8 = mat1 * mat6; //mot possible between two diffrernt type..

    return 0;
}
