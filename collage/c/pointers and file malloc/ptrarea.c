#include <stdio.h>
void calcarea(float *, float *);
int main()
{
    float radius, area;
    printf("\nen the radius of circle: ");
    scanf("%f", &radius);
    calcarea(&radius, &area);
    printf("the area is: %f", area);
    printf("\nthe area is: %f", &area);
    return 0;
}

void calcarea(float *r, float *a)
{
    *a = *r * *r * 3.14159;
}
