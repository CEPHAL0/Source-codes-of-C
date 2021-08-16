#include <stdio.h>
int main()
{
    float marks[10];
    float sum = 0;
    int i;
    float avg;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the marks: ");
        scanf("%f", marks + i);
        sum += *(marks + i);
    }
    avg = sum / 10;
    printf("The average is %f", avg);
    return 0;
}