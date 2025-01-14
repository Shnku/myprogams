#include <stdio.h>
#define CALC(x) (x * x * x)
#define CUBE(x) \
    CALC(x);    \
    printf("inside x=%d\t ", x);

int cube(int x) {
    printf("%dx%dx%d\t", x, x + 1, x + 2);
    return (x++) * (x++) * (x++);
}

int main() {
    int a = 0, b = 3;

    a = CUBE(b);  // 3*3*3
    printf("(b) a = %d, b=%d\n", a, b);
    a = CUBE((b + 1));  // 4*4*4
    printf("(b+1) a = %d, b=%d\n", a, b);

    int c = 3;
    a = CUBE(c++);  // multiple unsequenced modifications to 'c'
    printf("(c=3++) a = %d, c=%d\n", a, c);
    int d = 3;
    a = CUBE(++d);
    printf("(++d=3) a = %d, d=%d\n", a, d);

    b = 3;
    a = CUBE(b++);  // multiple unsequenced modifications to 'b'
    printf("(b++) a = %d, b=%d\n", a, b);
    a = CUBE(++b);
    printf("(++b) a = %d, b=%d\n", a, b);

    printf("using functiond\n");
    b = 3, a = 0;
    a = cube(b);
    printf("(b) a = %d, b=%d\n", a, b);
    a = cube(b + 1);
    printf("(b+1) a = %d, b=%d\n", a, b);
    a = cube(b++);
    printf("(b++) a = %d, b=%d\n", a, b);
    a = cube(++b);
    printf("(++b) a = %d, b=%d\n", a, b);
    return 0;
}

/*
a = 27 //3*3*3
a = 64 //4*4*4
a = 60 //3*4*5 // b==3,4,5,6
b = 6
a = 60 //3*4*5 // b==6,7,8,9
b = 9
using functiond
3x3x3   (b) a = 27, b=3
3x3x3   (b++) a = 27, b=4
5x5x5   (b+1) a = 125, b=4
5x5x5   (++b) a = 125, b=5
        */

/*
inside x=3   (b) a = 27, b=3
inside x=4   (b+1) a = 64, b=3

inside x=6   (c=3++) a = 60, c=7 //3*4*5
inside x=7   (++d=3) a = 150, d=7 //

inside x=6   (b++) a = 60, b=7
inside x=11  (++b) a = 810, b=11

using functiond
3x3x3   (b) a = 27, b=3
4x4x4   (b+1) a = 64, b=3
3x3x3   (b++) a = 27, b=4
5x5x5   (++b) a = 125, b=5
*/

/*
   return (x++) * (x++) * (x++);
3x4x5   (b) a = 60, b=3
4x5x6   (b+1) a = 120, b=3
3x4x5   (b++) a = 60, b=4
5x6x7   (++b) a = 210, b=5

*/

// output for clang..........
/*
inside x=3	 (b) a = 27, b=3
inside x=4	 (b+1) a = 64, b=3
inside x=6	 (c=3++) a = 60, c=7   //3*4*5
inside x=7	 (++d=3) a = 120, d=7  //4*5*6
inside x=6	 (b++) a = 60, b=7     //3*4*5
inside x=11	 (++b) a = 720, b=11   //8*9*10
using functiond
3x4x5	(b) a = 60, b=3
4x5x6	(b+1) a = 120, b=3
3x4x5	(b++) a = 60, b=4
5x6x7	(++b) a = 210, b=5
*/

