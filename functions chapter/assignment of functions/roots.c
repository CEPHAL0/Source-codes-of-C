#include <stdio.h>
#include <math.h>
float CalculateRoots()
{
    int r1, r2, a, b, c;
    printf("Enter the three roots:");
    scanf("%d %d %d", &a, &b, &c);
    r1 = ((-b) + pow((b * b) - (4 * a * c), 1 / 2)) / (2 * a);
    r2 = ((-b) - pow((b * b) - (4 * a * c), 1 / 2)) / (2 * a);
    system("cls");
    printf("\nThe two roots are: %d %d", r1, r2);
}
int main()
{
    CalculateRoots();
    return 0;
}