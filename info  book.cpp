
#include <stdio.h>

struct book
{
    int id;
    char name[50];
    float price;
};

void read(struct book *b)
{
    printf("Enter book ID: ");
    scanf("%d", &b->id);

    printf("Enter book name: ");
    scanf(" %[^\n]", b->name);

    printf("Enter book price: ");
    scanf("%f", &b->price);
}

void display(struct book *b)
{
    printf("\nBook Information:\n");

    printf("ID = %d\n", b->id);
    printf("Name = %s\n", b->name);
    printf("Price = %.2f\n", b->price);
}

int main()
{
    struct book b;

    read(&b);
    display(&b);

    return 0;
}

