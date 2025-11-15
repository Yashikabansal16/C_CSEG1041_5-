/*Create a Book structure containing book_id, title, author name and price.
Write a C program to pass a structure as a function argument and print the
book details. */

#include<stdio.h>

struct book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void display(struct book b) {
    printf("Book ID: %d\n",b.book_id);
    printf("Book title: %s\n",b.title);
    printf("Book author: %s\n",b.author);
    printf("Book price: %f",b.price);
}

int main() {
    struct book b1;
    printf("Enter book ID: ");
    scanf("%d",&b1.book_id);

    printf("Enter title of book:  ");
    scanf("%s",b1.title);

    printf("Enter author of book: ");
    scanf("%s",b1.author);

    printf("Enter price of book: ");
    scanf("%f",&b1.price);

    display(b1);
    
    return 0;
}