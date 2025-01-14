#include <stdio.h>
int main() {
    int x;
    x = 5 > 8 ? 10 : (1 == 2 < 5 ? 20 : 30);  // 20
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (1 != 2 < 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (1 == 2 > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (1 != 2 > 5 ? 20 : 30);  // 20
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (2 == 2 > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (2 != 2 > 5 ? 20 : 30);  // 20
    printf("%d\n", x);

    printf("there is hidden parenthesis....\n");
    x = 5 > 8 ? 10 : ((0) < 5 ? 20 : 30);  // 20
    printf("%d\n", x);
    x = 5 > 8 ? 10 : ((1) < 5 ? 20 : 30);  // 20
    printf("%d\n", x);
    x = 5 > 8 ? 10 : ((0) > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : ((1) > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : ((1) > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : ((0) > 5 ? 20 : 30);  // 30
    printf("%d\n", x);

    printf("if there is hiddend &&...\n");
    x = 5 > 8 ? 10 : (1 == 2 && 2 < 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (1 != 2 && 2 < 5 ? 20 : 30);  // 20
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (1 == 2 && 2 > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (1 != 2 && 2 > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (2 == 2 && 2 > 5 ? 20 : 30);  // 30
    printf("%d\n", x);
    x = 5 > 8 ? 10 : (2 != 2 && 2 > 5 ? 20 : 30);  // 30
    printf("%d\n", x);

    printf("use oprtator precedense before <> then==\n");
    x = (1 == (1) ? 20 : 30);  // 20
    printf("%d\n", x);
    x = (1 != (1) ? 20 : 30);  // 30
    printf("%d\n", x);
    x = (1 == (0) ? 20 : 30);  // 30
    printf("%d\n", x);
    x = (1 != (0) ? 20 : 30);  // 20
    printf("%d\n", x);
    x = (2 == (0) ? 20 : 30);  // 30
    printf("%d\n", x);
    x = (2 != (0) ? 20 : 30);  // 20
    printf("%d\n", x);
}

// there is operator precedance...
/*
~/MiniatureFlamboyantBoard/miselenous$ ./tenary
20
30
30
20
30
20
there is hidden parenthesis....
20
20
30
30
30
30
if there is hiddend &&...
30
20
30
30
30
30
use oprtator precedense before <> then==
20
30
30
20
30
20
*/