/* Write a program to create a simple linked list in C using pointer and structure. */

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *first = NULL,
    *second = NULL,
    *third = NULL;

first = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

first->data = 10;
first->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = NULL;

struct Node* temp = first;
printf("Linked list: \n");

while(temp != NULL) {
    printf("%d-> ",temp->data);
    temp = temp->next;
}
printf("NULL\n");

return 0;

}