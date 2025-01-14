#include <stdio.h>
#include <stdlib.h>
#define p p + 1
int main(void) {
    printf("Hello World\n");
    int i = 01234;
    printf("%d abs= %d, p= %d", i, abs(-2 + 1), 10);
    int a;
    printf("en a no: ");
    int q = scanf("%d", &a);
    printf("%d entered  %d\n", a, q);
    return 0;
}