#include <stdio.h>
int main() {
    int i = -4;
    while (i) printf("in loop\n");
    printf("out\n");
}

/*
any value other than 0 means true => infinite loop..
*/
