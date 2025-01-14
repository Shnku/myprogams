#include <stdio.h>
int main() {
    int i, k = 2;
    if ((i != k)) {
        printf("yes %i\n", i);  // by def i=0
    } else {
        printf("no");
    }
    if ((i = k))
        printf("yek\n");
    else
        printf("no\n");
}

/*
any value other than 0 means true => infinite loop..
*/