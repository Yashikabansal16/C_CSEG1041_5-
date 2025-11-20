/*Write a program to insert item in middle of the linked list. */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertMiddle(struct Node* head, int position, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* temp = head;
    int i = 1;

    while (i < position && temp != NULL) {
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Position not found.\n");
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node inserted successfully.\n");
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head, *second, *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Original List:\n");
    printList(head);

    int position = 2;  
    int value = 99;    

    printf("\nInserting %d after position %d...\n", value, position);
    insertMiddle(head, position, value);

    printf("\nUpdated List:\n");
    printList(head);

    return 0;
} 