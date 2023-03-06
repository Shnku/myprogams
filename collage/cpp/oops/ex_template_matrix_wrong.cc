
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

todo: For example, you can declare the size of the matrix using a template parameter as follows:

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


/*
!reeors...

ex_template_matrix_wrong.cc:17:11: error: invalid use of non-static data member 'matrix<T>::row'
   17 |     T mat[row][col];
      |           ^~~
ex_template_matrix_wrong.cc:16:9: note: declared here
   16 |     int row, col;
      |         ^~~
ex_template_matrix_wrong.cc:17:16: error: invalid use of non-static data member 'matrix<T>::col'
   17 |     T mat[row][col];
      |                ^~~
ex_template_matrix_wrong.cc:16:14: note: declared here
   16 |     int row, col;
      |              ^~~
ex_template_matrix_wrong.cc:28:43: warning: friend declaration 'matrix<T> operator*(matrix<T>, matrix<T>)' declares a non-template function [-Wnon-template-friend]
   28 |     friend matrix operator*(matrix, matrix);
      |                                           ^
ex_template_matrix_wrong.cc:28:43: note: (if this is not what you intended, make sure the function template has already been declared and add '<>' after the function name here)
ex_template_matrix_wrong.cc: In member function 'void matrix<T>::setdata()':
ex_template_matrix_wrong.cc:96:20: error: 'mat' was not declared in this scope
   96 |             cin >> mat[i][j];
      |                    ^~~
ex_template_matrix_wrong.cc: In member function 'void matrix<T>::display()':
ex_template_matrix_wrong.cc:108:29: error: 'mat' was not declared in this scope
  108 |             cout << "| " << mat[i][j] << " ";
      |                             ^~~
ex_template_matrix_wrong.cc: At global scope:
ex_template_matrix_wrong.cc:115:14: error: using template type parameter 'T' after 'class'
  115 | matrix<class T> matrix<class T>::operator+(matrix tmp)
      |              ^
ex_template_matrix_wrong.cc:115:15: error: template argument 1 is invalid
  115 | matrix<class T> matrix<class T>::operator+(matrix tmp)
      |               ^
ex_template_matrix_wrong.cc:115:30: error: using template type parameter 'T' after 'class'
  115 | matrix<class T> matrix<class T>::operator+(matrix tmp)
      |                              ^
ex_template_matrix_wrong.cc:115:31: error: template argument 1 is invalid
  115 | matrix<class T> matrix<class T>::operator+(matrix tmp)
      |                               ^
ex_template_matrix_wrong.cc:115:44: error: class template placeholder 'matrix' not permitted in this context
  115 | x<class T> matrix<class T>::operator+(matrix tmp)
      |                                       ^~~~~~

ex_template_matrix_wrong.cc:115:17: error: 'int operator+(...)' must have an argument of class or enumerated type
  115 | matrix<class T> matrix<class T>::operator+(matrix tmp)
      |                 ^~~~~~~~~~~~~~~
ex_template_matrix_wrong.cc:129:14: error: using template type parameter 'T' after 'class'
  129 | matrix<class T> matrix<class T>::operator-(matrix tmp)
      |              ^
ex_template_matrix_wrong.cc:129:15: error: template argument 1 is invalid
  129 | matrix<class T> matrix<class T>::operator-(matrix tmp)
      |               ^
ex_template_matrix_wrong.cc:129:30: error: using template type parameter 'T' after 'class'
  129 | matrix<class T> matrix<class T>::operator-(matrix tmp)
      |                              ^
ex_template_matrix_wrong.cc:129:31: error: template argument 1 is invalid
  129 | matrix<class T> matrix<class T>::operator-(matrix tmp)
      |                               ^
ex_template_matrix_wrong.cc:129:44: error: class template placeholder 'matrix' not permitted in this context
  129 | x<class T> matrix<class T>::operator-(matrix tmp)
      |                                       ^~~~~~

ex_template_matrix_wrong.cc:129:17: error: 'int operator-(...)' must have an argument of class or enumerated type
  129 | matrix<class T> matrix<class T>::operator-(matrix tmp)
      |                 ^~~~~~~~~~~~~~~
ex_template_matrix_wrong.cc:149:14: error: using template type parameter 'T' after 'class'
  149 | matrix<class T> operator*(matrix<class T> a, matrix<class T> b)
      |              ^
ex_template_matrix_wrong.cc:149:15: error: template argument 1 is invalid
  149 | matrix<class T> operator*(matrix<class T> a, matrix<class T> b)
      |               ^
ex_template_matrix_wrong.cc:149:40: error: using template type parameter 'T' after 'class'
  149 | atrix<class T> operator*(matrix<class T> a, matrix<class T> b)
      |                                       ^

ex_template_matrix_wrong.cc:149:41: error: template argument 1 is invalid
  149 | trix<class T> operator*(matrix<class T> a, matrix<class T> b)
      |                                       ^

ex_template_matrix_wrong.cc:149:59: error: using template type parameter 'T' after 'class'
  149 | > operator*(matrix<class T> a, matrix<class T> b)
      |                                             ^

ex_template_matrix_wrong.cc:149:60: error: template argument 1 is invalid
  149 | > operator*(matrix<class T> a, matrix<class T> b)
      |                                              ^

ex_template_matrix_wrong.cc:149:17: error: 'int operator*(int, int)' must have an argument of class or enumerated type
  149 | matrix<class T> operator*(matrix<class T> a, matrix<class T> b)
      |                 ^~~~~~~~
ex_template_matrix_wrong.cc:180:19: error: using template type parameter 'T' after 'class'
  180 | void matrix<class T>::transporse()
      |                   ^
ex_template_matrix_wrong.cc:180:20: error: template argument 1 is invalid
  180 | void matrix<class T>::transporse()
      |                    ^
ex_template_matrix_wrong.cc: In function 'void transporse()':
ex_template_matrix_wrong.cc:182:25: error: 'row' was not declared in this scope
  182 |     for (int i = 0; i < row; i++)
      |                         ^~~
ex_template_matrix_wrong.cc:184:19: error: expected ';' before 'i'
  184 |         for (int j i = 0; i < col; i++)
      |                   ^~
      |                   ;
ex_template_matrix_wrong.cc:184:31: error: 'col' was not declared in this scope
  184 |         for (int j i = 0; i < col; i++)
      |                               ^~~
ex_template_matrix_wrong.cc:184:34: error: expected ')' before ';' token
  184 |         for (int j i = 0; i < col; i++)
      |             ~                    ^
      |                                  )
ex_template_matrix_wrong.cc:184:39: error: expected ';' before ')' token
  184 |         for (int j i = 0; i < col; i++)
      |                                       ^
      |                                       ;

*/