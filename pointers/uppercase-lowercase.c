#include <stdio.h>
void conversion(char *c)
{
    if (*c >= 97 && *c <= 122)
    {
        *c = *c - 32;
    }
    else if (*c >= 65 && *c <= 90)
    {
        *c = *c + 32;
    }
}

int main()
{
    char input;
    printf("Enter character of your choice: ");
    scanf("%c", &input);
    conversion(&input);
    printf("\nThe corresponding character is: %c", input);
    return 0;
}