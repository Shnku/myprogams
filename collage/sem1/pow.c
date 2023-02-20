c program to creat a manual pow function
#include <stdio.h> 
  
/*Function to calculate x raised to the power y*/
long power(int x, int y) 
{ 
    long temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 
  
/*Driver program to test power()*/
int main() 
{ 
    int x = 2; 
    int y = 3; 
  
    printf("%d", power(x, y)); 
    return 0; 
} 


int Power(int x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return Power(x, y / 2) * Power(x, y / 2); 
    else
        return x * Power(x, y / 2) * Power(x, y / 2); 
} 