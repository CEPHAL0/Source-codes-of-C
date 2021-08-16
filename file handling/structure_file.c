// Q.4.  Program to write items detail(Itemid, item_name, price, etc) into the file as a structure array and read the same from file

#include <stdio.h>
#include <stdlib.h>
struct item
{
    int id;
    char name[20];
    int price;
};

struct stock
{
    int id;
    char name[20];
    int price;
};

int main()
{
    int n, a;
    printf("Enter the number of items: \n");
    scanf("%d", &n);
    struct item i[n];
    struct stock s[n];
    FILE *f;
    f = fopen("items.txt", "w");
    for (a = 0; a < n; a++)
    {
        printf("Enter the item %d id: ", a + 1);
        scanf("%d", &i[a].id);
        printf("Enter the item %d name: ", a + 1);
        scanf(" %[^\n]", i[a].name);
        printf("Enter the item %d price: ", a + 1);
        scanf("%d", &i[a].price);
        fprintf(f, "%d %s %d ", i[a].id, i[a].name, i[a].price);
        printf("\n");
    }
    fclose(f);

    f = fopen("items.txt", "r");
    system("cls");
    printf("\nThe contents of file are: \n");
    for (a = 0; a < n; a++)
    {
        fscanf(f, "%d %s %d", &s[a].id, s[a].name, &s[a].price);
        printf("Item ID: %d", s[a].id);
        printf("\nItem Name: %s", s[a].name);
        printf("\nItem Price: %d", s[a].price);
        printf("\n-------------------------\n");
    }
    return 0;
}