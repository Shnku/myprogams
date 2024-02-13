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

/*
________what scanf_printf returns______
*/
#if 0
int main() {
  int a = printf("\nthis is qq 33111");
  int b = printf("\n%d", a);
  int c = printf("\n%d\n\t", b);
  printf("%d\n", c);

//   int d = scanf("%d", &a);
//   printf("%d\n\n", d);

  char f[100];
  int e = scanf("%s", f);
  printf("%d\n", e);
}
/*17
3
        4
thisis
1
*/
#endif


#if 0
int main() {
  char c[100];
  scanf("%[A-Z a-z ]", c);
  printf("%s\n", c);
}
/*
this is the my thibg!! @#$
this is the my thibg
*/
#endif