#include <stdio.h>
#include <string.h>
void sort()
{
    char w[5][20];
    int i,j;
    char temp[20];
    for (i=0; i<5; i++)
    {
        printf("Enter the cities: ");
        scanf("%s", w[i]);
    }
    printf("The alphabetical order is: \n");
    for (i=0; i<5; i++)
    {
        for (j=i+1; j<5; j++)
        {
          if (strcmp(w[i], w[i+1])>0)
          {
              strcpy(temp, w[i]);
              strcpy(w[i],w[j]);
              strcpy(w[j], temp);
          }
        }
        printf("%s", w[i]);  
        printf("\n"); 
    } 
} 

int main()
{
    sort();
    return 0;
}
