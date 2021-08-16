#include <stdio.h>
#include <stdlib.h>
struct Book
{
    int bid;
    char bname[20];
    char aname[20];
};

int main()
{
    struct Book b1;
    FILE *f;
    int id;
    char bn[20];
    char ba[20];
    printf("Enter the Book id: ");
    scanf("%d", &b1.bid);
    printf("\nEnter the Book name: ");
    scanf("%s", b1.bname);
    printf("\nEnter the Book author: ");
    scanf("%s", b1.aname);

    // Open file in write mode
    f = fopen("bookdetail.txt", "w");
    fprintf(f, "%d\t%s\t%s", b1.bid, b1.bname, b1.aname);
    fclose(f);

    // Open file in read mode
    f = fopen("bookdetail.txt", "r");
    fscanf(f, "%d%s%s", &id, bn, ba);
    printf("The Book details are: \n");
    printf("Book ID: %d\tBook name: %s\tAuthor name: %s", id, bn, ba);
    fclose(f);
    return 0;
}