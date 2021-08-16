#include <stdio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;
    int ***ppptr;
    var = 3000;
    ptr = &var;
    pptr = &ptr;
    ppptr = &pptr;
    printf("Value of var: %d", var);
    printf("\nValue of ptr: %d", *ptr);
    printf("\nValue of pptr: %d", **pptr);
    printf("\nValue of ppptr: %d", ***ppptr);
    return 0;
}