#include <stdio.h>
#include <string.h>
char lower()
{
    char a[20];
    int n,i,j;
    printf("Enter the letter in lowercase: ");
    scanf("%s", &a);
    printf("The letter in uppercase is: ");
    for (i=0; i<strlen(a); i++)
    {
        printf("%c", a[i] - 32);
    } 
}
int main()
{
    lower();
    return 0;
}