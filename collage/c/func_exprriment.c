#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void yes_no_check(int);
int no_check(int);
int factor(int);

int no; // global number...

int main()
{
    printf("en the no: ");
    scanf("%d", &no);
    // call function1...
    factor(no);
}

int factor(int nth)
{
    int sum = 0;
    for (int i = 1; i <= nth; i++)
    {
        if (nth % i == 0)
        {
            sum = sum + i;
        }
    }
    no_check(sum); // call func inside factor func....
}

int no_check(int n)
{
    int flag;
    // n == no ? flag = 1 : flag = 0; //wrong..
    flag = (n == no) ? 1 : 0;

    yes_no_check(flag); // call func inside factor func....
}

void yes_no_check(int mark)
{
    if (mark == 1)
        printf("yes");
    else
        printf("no");
}
