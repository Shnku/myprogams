#include <stdio.h>
#include <string.h>
struct book
{
    char name[20];
    int page;
    float price;
};

int main()
{
    struct book b[3];
    int i;
    float sum = 0;
    for (i = 0; i < 3; i++)
    {
        printf("\nen %d book details:\n", i);
        // fflush(stdin);
        // gets(b[i].name);
        // for(int j=0;;j++)
        // for(int j=0; (char)j!='\n'; j++)
        // scanf("%c", &b[i].name[j]);

        // printf("\nen price and pg no: ");
        scanf("%s", b[i].name);
        scanf("%d", &b[i].page);
        scanf("%f", &b[i].price);
    }
    printf("\ndisplay book details:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nbook %d..............\n", i);
        puts(b[i].name);
        printf("pg= %d\t,Rs= %d", b[i].page, b[i].price);
    }
    for (i = 0; i < 3; i++)
    {
        sum += b[i].price;
    }
    printf("\ntotal price of 3 books: %f", sum);
    return 0;
}