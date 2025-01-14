#include <stdio.h>
int main() {
    int x = 65, *p = &x;
    void *q = p;
    char *r = q;
    printf("%ld %ld %ld", sizeof(p), sizeof(q), sizeof(r));  // 8 8 8
    printf("\n %d %d", *p, *r);                              // 65 65
    printf("\n %c %c", *p, *r);                              // A A
    printf("\n%ld", sizeof(&q));                             // 8
    // printf("\n%p", *q); //void pointer error..
}

#if 0
#include <stdio.h>
int main() {
    const int a = 23;
    printf("%d", ++a);  // cannot assign to variable 'a' with const-qualified
                        // type 'const int'
}
#endif