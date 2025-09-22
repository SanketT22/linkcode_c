#include <stdio.h>
#include <stdlib.h>

// Node structure for circular linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at the end of circular linked list
void insertEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != *head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = *head;
}

// Display circular linked list
void display(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Delete a node by value
void deleteNode(Node** head, int key) {
    if (*head == NULL)
        return;
    Node *curr = *head, *prev = NULL;
    // If head needs to be deleted
    if (curr->data == key) {
        // Find last node
        while (curr->next != *head)
            curr = curr->next;
        if (*head == (*head)->next) {
            free(*head);
            *head = NULL;
            return;
        }
        curr->next = (*head)->next;
        free(*head);
        *head = curr->next;
        return;
    }
    prev = *head;
    curr = (*head)->next;
    while (curr != *head && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }
    if (curr->data == key) {
        prev->next = curr->next;
        free(curr);
    }
}

int main() {
    Node* head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Circular Linked List: ");
    display(head);

    printf("Deleting 20...\n");
    deleteNode(&head, 20);
    display(head);

    printf("Deleting 10...\n");
    deleteNode(&head, 10);
    display(head);

    return 0;
}