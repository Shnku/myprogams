#include <stdio.h>
int main() {
    int x = 2, y = 1;
    x *= x + y;         // x=x*(x+y)
    printf("x=%d", x);  // 6 not 5

    x = x + y + x;
    printf("x=%d", x);  // 6
}