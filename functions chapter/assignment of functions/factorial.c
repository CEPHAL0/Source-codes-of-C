#include <stdio.h>
int factorial(int);
int main(void)
{
    int n;
    int fact;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The value of sum is %d", fact);
    return 0;
}

int factorial(int n)
{
    int i, j, tempf;
    int temp;
    temp = 0;
    for (i = n; i > 0; i--)
    {
        tempf = 1;
        for (j = i; j > 0; j--)
        {
            tempf *= j;
        }
        temp += (tempf / i);
    }
    return temp;
}