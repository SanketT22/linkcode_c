#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at first
void insertFirst(int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
        newNode->next = head; // Point to itself
    } else {
        struct Node* temp = head;
        // Move to last node
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}

// Insert at middle (by position, 1-based index)
void insertMiddle(int data, int pos) {
    if (head == NULL || pos == 1) {
        insertFirst(data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    int count = 1;

    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete first node
void deleteFirst() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;

    // Only one node
    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        struct Node* last = head;
        while (last->next != head) {
            last = last->next;
        }
        head = head->next;
        last->next = head;
        free(temp);
    }
}

// Delete middle (by position)
void deleteMiddle(int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (pos == 1) {
        deleteFirst();
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;
    int count = 1;

    while (count < pos && temp->next != head) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (count < pos) {
        printf("Position out of range!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Display the list with addresses
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;
    printf("\n--- Circular Linked List ---\n");
    printf("Format: [Data | Node Address | Next Address]\n");

    do {
        printf("[%d | %p | %p] -> \n", temp->data, (void*)temp, (void*)temp->next);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

// Main menu
int main() {
    int choice, data, pos;

    while (1) {
        printf("\n--- Circular Linked List Menu ---\n");
        printf("1. Insert First\n");
        printf("2. Insert Middle (by position)\n");
        printf("3. Delete First\n");
        printf("4. Delete Middle (by position)\n");
        printf("5. Display (with addresses)\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertFirst(data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertMiddle(data, pos);
                break;
            case 3:
                deleteFirst();
                break;
            case 4:
                printf("Enter position: ");
                scanf("%d", &pos);
                deleteMiddle(pos);
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
