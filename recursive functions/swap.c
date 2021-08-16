#include <stdio.h>
void swap(int, int);
int main()
{
    int a = 100;
    int b = 200;
    printf("Before swapping the vlues of a and b are %d and %d ", a, b);
    swap(a, b);
    printf("\nValues after swapping are %d and %d", a, b);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}