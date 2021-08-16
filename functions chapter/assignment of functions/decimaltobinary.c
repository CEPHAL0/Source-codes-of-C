#include <stdio.h>
int con(int d)
{
    int i, n, b, t;
    t = 1;
    for (i = 0; d != 0; i++)
    {
        b += d % 2 * t;
        t = t * 10;
        d = d / 2;
    }
    return b;
}

int main()
{
    int d, b;
    printf("Enter the value of decimal number:");
    scanf("%d", &d);
    b = con(d);
    printf("\nThe binary number is: %d", b);
    return 0;
}