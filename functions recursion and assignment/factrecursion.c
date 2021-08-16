#include <stdio.h>
int fact(int n)
{
    int i,f=1;
    if (n<1)
    {
        return f;
    }
    else
    {
        f=n*fact(n-1);
    }
}
int main()
{
    int n,factorial;
    printf("Enter the number: ");
    scanf("%d", &n);
    factorial=fact(n);
    printf("\nThe factorial is: %d", factorial);
}