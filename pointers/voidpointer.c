#include <stdio.h>
int main()
{
    int a = 10;
    double b = 4.5;
    void *ptr;
    ptr = &a;
    printf("The value of pointer is: %d", *((int *)ptr));
    printf("\nThe adress of pointer is: %u", ((int *)ptr));
    ptr = &b;
    printf("\nThe value of pointer is: %lf", *((double *)ptr));
    return 0;
}