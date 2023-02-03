#include <stdio.h>

struct student
{
    int a;     // 4
    float b;   // 4
    char n[1]; // 1
   // int c;     // 4
} s1;          // 4*3=12+1=13 //but 16 why??

union student_u
{
    int a;     // 4
    float b;   // 4
    char n[1]; // 1
   // int c;     // 4
} u1;          // 4*3=12+1=13 //but 16 why??

int main()
{
    int a[15];
    printf("\nsizeof arr : %d",sizeof(a));
    printf("\n array length is: %d,",(sizeof(a)/sizeof(int)));
    int *ptr;
    float *ptr2;
    double *ptr3;
    char *ptr4[10];
    printf("\n%d bytes", sizeof(short int));
    printf("\n%d bytes", sizeof(int));
    printf("\n%d bytes", sizeof(long int));
    printf("\n%d bytes", sizeof(long long int));
    printf("\n%d bytes", sizeof(float));
    printf("\n%d bytes", sizeof(double));
    printf("\n%d bytes\n", sizeof(char[10]));
    printf("\n ptr= %d bytes", sizeof(ptr));
    printf("\n ptr= %d bytes", sizeof(ptr2));
    printf("\n ptr= %d bytes", sizeof(ptr3));
    printf("\n ptr= %d bytes", sizeof(ptr4));
    
    printf("\n struct= %d bytes", sizeof(s1));
    printf("\n union= %d bytes", sizeof(u1));
    printf("\n struct= %d bytes", sizeof(s1.a));
    printf("\n struct= %d bytes", sizeof(s1.b));
    return 0;
}


