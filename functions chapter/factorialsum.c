#include <stdio.h>
float factorial(int);
int main(void)
{   
    int n;
    float fact;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("The value of sum is %f", fact);
    return 0;
}

float factorial(int n)
{
    float temp;
    int i,j,tempf;
    temp =0;
    for (i=n; i>0; i--)
    {
        tempf=1;
        for (j=i; j>0; j--)
        {
            tempf *= j;
        }
        temp += (i/tempf);
    }
    return temp;
}