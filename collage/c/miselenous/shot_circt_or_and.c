#include <stdio.h>

int main()
{
    int a = -1, b = 4, c = 1, d;
    d = ++a && ++b || ++c;            // false(a=0) && (not evaluated) || true
    printf("%d%d%d%d\n", a, b, c, d); // output: 0421

    a = -1, b = 4, c = 1;
    d = ++a || ++b && ++c;
    printf("%d%d%d%d\n", a, b, c, d); // output: 0521

    a = -1, b = 4, c = 1;
    d = ++a || ++b || ++c;            // false(a=0) || true(b=5) || (not evaluated)
    printf("%d%d%d%d\n", a, b, c, d); // output: 0511

    a = -1, b = 4, c = 1;
    d = ++a && ++b && ++c;
    printf("%d%d%d%d\n", a, b, c, d); // output: 0410

    // all positive .....
    a = 1, b = 2, c = 3;
    d = (a++ < 2) || (b++ < 2) && (c++ < 4);
    printf("%d %d %d %d", a, b, c, d); // output: 2231
    /*
    a++ < 2 evaluates to true (1) because a is 1, and then a is incremented to 2.
    Since the first condition is true, the || operator short-circuits, and the second part (b++ < 2) && (c++ < 4) is not evaluated.
    Therefore, b and c remain unchanged.
    d is assigned true (1)
    */

    return 0;
}

/*

Logical AND (&&)

The && operator will short-circuit if the first operand is "falsey" (i.e., 0, NULL, or an empty string). If the first operand is falsey, the second operand is not evaluated, and the entire expression returns 0.

Example: if (0 && printf("Hello")) { ... }

In this case, printf("Hello") is not executed because the first operand (0) is falsey.

Logical OR (||)

The || operator will short-circuit if the first operand is "truthy" (i.e., non-zero, non-NULL, or non-empty string). If the first operand is truthy, the second operand is not evaluated, and the entire expression returns 1.

Example: if (1 || printf("Hello")) { ... }

In this case, printf("Hello") is not executed because the first operand (1) is truthy.

*/