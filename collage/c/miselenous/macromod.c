#include <stdio.h>

#define DEBUG
#ifdef DEBUG
#define PRINT(x) printf("Value: %d\n", (x))
#else
#define PRINT(x)
#endif

#define CUBE(x) ((x) * (x) * (x))

int main() {
    int b = 2;
    PRINT(CUBE(b));
    return 0;
}