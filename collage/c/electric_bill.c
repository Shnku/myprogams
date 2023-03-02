#include <stdio.h>
#include <math.h>
/*int main()
{
    float x;
    printf("enter the electric amount");
    scanf("%f", &x);
    if (x <= 200)
    {
        printf("the bill is %f", (x * 0.50));
    }
    else if ((x > 200) && (x <= 400))
    {
        printf("the bill is %f", ((x * 0.50) + ((400 - x) * 0.65)));
    }
    else if ((x > 400) && (x <= 600))
    {
        printf("the bill is %f", ((x * 0.50) + ((x - 400) * 0.65) + (600 - x) * 0.80));
    }
    else if (x >= 600)
    {
        printf("the bill is %f", ((x * 0.50) + (x - 400) * 0.65 + (x - 600) * 0.80 + (600 - x) * 1.25));
    }
    return 0;
}
*/
int main()
{
    float x;
    printf("Enter the electric amount: ");
    scanf("%f", &x);

    float totalBill = 0;
    switch ((int)x / 200)
    {
    case 0:
        totalBill = x * 0.50;
        break;
    case 1:
        totalBill = (x - 200) * 0.65 + 100;
        break;
    case 2:
        totalBill = (x - 400) * 0.80 + 230;
        break;
    default:
        totalBill = (x - 600) * 1.25 + 310;
        break;
    }

    printf("The bill is %f\n", totalBill);
    return 0;
}
