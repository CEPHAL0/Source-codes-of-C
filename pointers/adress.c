#include <stdio.h>
int main()
{
    int s = 6;
    printf("The adress is: %d", &s);
    printf("The value is: %d", s);
    return 0;
}