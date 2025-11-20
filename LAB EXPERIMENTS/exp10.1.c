/* Write a program to create a simple linked list in C using pointer and structure. */

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL,
    *second = NULL,
    *end = NULL;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
end = (struct Node*)malloc(sizeof(struct Node));

head->data = 30;
head->next = second;

second->data = 40;
second->next = end;

end->data = 50;
end->next = NULL;

struct Node *temp = head;

while(temp->next != NULL) {
    printf("%d ",temp->data);
    temp = temp->next;
}

return 0;

}