#include <stdio.h>

/*
____printf  without semicolon,___...
*/
#if 0
int main()
{
    if (printf("\nhallo world\n"))
    {
    }
    while (printf("\nwalla habibai world\n"))
        break;

    switch (printf("\nhallo world\n"))
        ;
    return 0;
}
#endif

/*
______program without main function.______....
*/
#if 0

// #define start main
// int start()
// {
//     printf("\nwhalak hjag ");
//     return 0;
// }

/*__or__*/

// #define BEGIN  \
//     int main() \
//     {
// #define END   \
//     return 0; \
//     }

// BEGIN
// printf("Hello, world!\n");
// END

/*____or___-*/
#define first {
#define last }
#define colon ;
#define START int main() first
#define END return 0 colon last

START
printf("\nthis is tgrnmdf");
END

#endif

/*
______printf manipulation..______...
*/
#if 0
#define P(n) printf("%d\n", n), n++
int main()
{
    int n = 1;
    P(n);
    P(n);
    P(n);
    P(n);
    P(n);
    return 0;
}
#endif
