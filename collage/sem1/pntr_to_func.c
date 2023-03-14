#include <stdio.h>
void func(int a)
{
    printf("\nValue of a is: %d", a);
}

int main()
{
    void (*func_ptr)(int);
    func_ptr = &func;
    printf("\ncalling func_ptr");
    (*func_ptr)(10);
    printf("\ncalling func");
    func(20);
    return 0;
}
