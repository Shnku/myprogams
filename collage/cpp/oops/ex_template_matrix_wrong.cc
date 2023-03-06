
/*..........//!thids is wrong code............
 *!vggvhjhjg   wrong  */
/*


*/

#include <iostream>
using namespace std;

template <class T>
class matrix
{
private:
    int row, col;
    T mat[row][col];
    /*
    !we cant do it herer cause row col not set....here we have to use dynamic memory allocation for 2d array...!wrong*/

public:
    matrix();
    matrix(int, int);
    void setdata();
    void display();
    matrix operator+(matrix);
    matrix operator-(matrix);
    friend matrix operator*(matrix, matrix);
    void transporse();
};

// .......................
// !other errors,,,.........
//     In the matrix class, the declaration of the 2D array T mat[row][col] is incorrect. The values of row and col are not yet defined at this point, so this is not valid C++. Instead, you need to dynamically allocate memory for the matrix in the constructor.

/*

for do it.........................
Yes, you can implement this matrix class without dynamic memory allocation.
You can declare the size of the matrix at compile time using a constant value or a template parameter.

For example, you can declare the size of the matrix using a template parameter as follows:

template <class T, int ROW, int COL>
class Matrix
{
private:
    T mat[ROW][COL];

public:
    Matrix();
    Matrix(T arr[ROW][COL]);
    void setdata();
    void display();
    Matrix operator+(Matrix);
    Matrix operator-(Matrix);
    friend Matrix operator*(Matrix, Matrix);
    void transpose();
};

?Then you can define the member functions and operators as before, using the template parameters ROW and COL instead of the row and col variables.

!Note that this implementation has some limitations, as the size of the matrix is fixed at compile time and cannot be changed at runtime.

.......................................
*/

template <class T>
matrix<T>::matrix()
{
    cout << "\nen the row x col value: ";
    cin >> row >> col;
}

template <class T>
matrix<T>::matrix(int row, int col)
{
    this->col = col;
    this->row = row;
}

/*
//!errors...
    The constructor matrix(int row, int col) does not initialize the matrix elements, so all the elements of the matrix will be uninitialized.

*/

template <class T>
void matrix<T>::setdata()
{
    cout << "\nenter matrix data:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
}

template <class T>
void matrix<T>::display()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "| " << mat[i][j] << " ";
        }
        cout << '\n';
    }
}

template <class T>
matrix<class T> matrix<class T>::operator+(matrix tmp)
{
    matrix<class T> result(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result.mat[i][j] = mat[i][j] + tmp.mat[i][j];
        }
    }
    return result;
}

template <class T>
matrix<class T> matrix<class T>::operator-(matrix tmp)
{
    matrix<class T> result(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result.mat[i][j] = mat[i][j] - tmp.mat[i][j];
        }
    }
    return result;
}

/*
!errors...
    In the operator+ and operator- overloading functions, the return type should be matrix<T>, not matrix<class T>.

*/

template <class T>
matrix<class T> operator*(matrix<class T> a, matrix<class T> b)
// this is needed for friend functions.....
{
    matrix<class T> result(row, col); // the same number of rows and columns as the two matrices being multiplied
    if (a.row != b.col)
    {
        cout << "\nmultiplication isnot possible:";
        exit(0);
    }
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.col; j++) // b.col
        {
            result.mat[i][j] = 0;
            for (int k = 0; k < a.col; k++)
            {
                result.mat[i][j] += a.mat[i][k] * b.mat[k][j];
            }
        }
    }
    return result;
}

/*
!errors...
    In the operator* overloading function, the parameters should be const matrix<T>& a and const matrix<T>& b, not matrix<class T> a and matrix<class T> b.
    Additionally, the variables row and col in this function are not defined; you should use a.row and b.col instead.

*/

template <class T>
void matrix<class T>::transporse()
{
    for (int i = 0; i < row; i++)
    {
        for (int j i = 0; i < col; i++)
        {
            mat[i][j] = mat[j][i];
        }
    }
}
/*

    In the transporse() function, there is a typo in the for loop: it should be for (int j = 0; j < col; j++) instead of for (int j i = 0; i < col; i++).

*/

// this is tyhe main function........
int main()
{

    return 0;
}
