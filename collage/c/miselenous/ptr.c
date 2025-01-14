#include <stdio.h>

int func(int *x, int c) {
    printf("c= %d ->\t", c);
    c--;
    printf("%d \n", c);
    if (c == 0) return 1;

    printf("x= %d \t", *x);
    *x = *x + 1;
    printf("calling function.. x= %d \t", *x);

    int p = func(x, c);
    printf("return %d <- %d x %d\n", p * (*x), p, *x);
    return p * (*x);
}

int func_no_ptr(int x, int c) {
    printf("c= %d ->\t", c);
    c--;
    printf("%d \n", c);
    if (c == 0) return 1;

    printf("x= %d \t", x);
    x = x + 1;
    printf("calling function.. x= %d \t", x);

    int p = func_no_ptr(x, c);
    printf("return %d <- %d x %d\n", p * (x), p, x);
    return p * (x);
}

int main() {
    int a = 5;
    printf("%d\n", func(&a, a));
    printf("without pointer....\n");
    a = 5;
    printf("%d\n", func_no_ptr(a, a));
}

/*
c= 5 -> 4
x= 5    calling function.. x= 6     c= 4 -> 3
x= 6    calling function.. x= 7     c= 3 -> 2
x= 7    calling function.. x= 8     c= 2 -> 1
x= 8    calling function.. x= 9     c= 1 -> 0
return 9 <- 1 x 9
return 81 <- 9 x 9
return 729 <- 81 x 9
return 6561 <- 729 x 9
6561
without pointer....
c= 5 -> 4
x= 5    calling function.. x= 6     c= 4 -> 3
x= 6    calling function.. x= 7     c= 3 -> 2
x= 7    calling function.. x= 8     c= 2 -> 1
x= 8    calling function.. x= 9     c= 1 -> 0
return 9 <- 1 x 9
return 72 <- 9 x 8
return 504 <- 72 x 7
return 3024 <- 504 x 6
3024
*/
