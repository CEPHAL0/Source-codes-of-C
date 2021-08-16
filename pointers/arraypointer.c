#include <stdio.h>
int main()
{
    int x[5] = {1,2,3,4,5};
    int k;
    printf("\nArray element \t\tElements value \t\t address");
    printf("\n");
    for (k=0; k<5; k++)
    {
        printf("x[%d]\t\t\t%d\t\t\t%p\n", k, *(x+k), x+k);
    }
    return 0;
}