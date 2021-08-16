#include <stdio.h>
#include <stdlib.h>

int *getArray()
{
    int i;
    static int a[10];

    for (i = 0; i < 10; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", a + i);
    }
    return a;
}

int main(void)
{
    int *p;
    p = getArray();
    printf("The array element are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", *(p + i)); // p[i]= *(p+i)
    }
}