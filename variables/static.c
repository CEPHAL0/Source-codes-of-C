#include <stdio.h>
int increment()
{
    int i=1;
    printf("%d\t",i);
    i++;
}
void main()
{
    increment();
    increment();
    increment();
    increment();
}