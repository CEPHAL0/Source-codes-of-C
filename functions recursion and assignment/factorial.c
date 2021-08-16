#include <stdio.h>
// Both argument and return type
int factorial1(int n)
{
    int i, f, j;
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

// No argument but return type
int factorial2()
{
    int n, i, f, j;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

// No return type but with argument
int factorial3(int n)
{
    int i, f, j;
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("\n The value of factorial using function with no return type but with argument is: %d", f);
}

// No return type and no argument
int factorial4()
{
    int n, i, f, j;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("\n The value of factorial using function with no return type and no argument is: %d", f);
}

int main()
{
    int n, fact1, fact2, fact3, fact4;
    printf("\n Enter the number: ");
    scanf("%d", &n);

    fact1 = factorial1(n);
    printf("\n The value of factorial using function with both argument and return type is: %d", fact1);
    printf("\n");

    fact2 = factorial2();
    printf("\n The value of factorial using function with returnn type but no argument is: %d", fact2);
    printf("\n");

    fact3 = factorial3(n);
    printf("\n");
    
    fact4 = factorial4();
    printf("\n");
    return 0;
}