#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int a = 99, b = 98;
    printf("BEFORE function calling a and b are: %d\t %d\n", a, b);
    swap(&a, &b);
    printf("AFTER function calling a and b are: %d\t %d\n", a, b);
}