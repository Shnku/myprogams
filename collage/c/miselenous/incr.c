#include <stdio.h>
int main() {
    int a = 9;
    if (a++) printf("\n1st pos %d", a);
    if (a--) printf("\n1st neg %d", a);
    a = 0;
    if (a--) printf("\n2nd neg %d", a);  // x
    if (a++) printf("\n2nd pos %d", a);
    a = 0;
    if (a++) printf("\n22nd pos %d", a);  // x
    if (a--) printf("\n22nd neg %d", a);

    a = 1;
    if (a--) printf("\n3rd neg %d", a);
    if (a++) printf("\n3rd pos %d", a);  // x
    a = 1;
    if (a++) printf("\n4th pos %d", a);
    if (a--) printf("\n4th neg %d", a);
}

/*out
1st pos 10
1st neg 9
2nd pos 0
22nd neg 0
3rd neg 0
4th pos 2
4th neg 1
*/