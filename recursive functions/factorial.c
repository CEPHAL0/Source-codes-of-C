#include <stdio.h>
int func(int num)
{
    int res = 0;
    if (num <= 0)
    {
        printf("\n Error\n");
    }
    else if (num == 1)
    {
        return num;
    }
    else
    {
        res = num * func(num - 1);
        return res;
    }
    return 0;
}

int main(void)
{
    int num = 5;
    int fact = func(num);
    if (fact > 0)
    {
        printf("The factorial of %d is %d", num, fact);
    }
    return 0;
}