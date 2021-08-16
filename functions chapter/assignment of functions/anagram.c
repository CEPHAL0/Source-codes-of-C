#include <stdio.h>
#include <string.h>
char anagram(char a[], char b[])
{
    int p, q, c, i, j;
    p = strlen(a);
    q = strlen(b);
    if (p == q)
    {
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                if (a[i] == b[j])
                {
                    c = c + 1;
                }
            }
            if (c == 0)
            {
                return 'N';
            }
            c = 0;
        }
        return 'Y';
    }
    return 'N';
}
int main()
{
    char a[20], b[20], output;
    printf("Enter the value of first string: ");
    scanf("%s", &a);
    printf("\nEnter the value of second string: ");
    scanf("%s", &b);
    output = anagram(a, b);
    if (output == 'Y')
    {
        printf("\nThe strings are anagram.");
    }
    else
    {
        printf("\nThe strings arent anagram.");
    }
    printf("\n--------------------------");
    return 0;
}