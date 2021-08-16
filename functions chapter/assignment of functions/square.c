#include <stdio.h>
int sqr(int n)
{
    return n * n;
}
int main()
{
    int a, s;
    printf("Enter the value of number: ");
    scanf("%d", &a);
    s = sqr(a);
    printf("\nThe square of %d is %d", a, s);
    printf("\n-------------------\n");
    return 0;
}