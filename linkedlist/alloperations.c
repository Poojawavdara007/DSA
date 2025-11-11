#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insertFront(int val) {
    struct Node* newNode = createNode(val);
    newNode->next = head;
    head = newNode;
}

void insertEnd(int val) {
    struct Node* newNode = createNode(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void insertAtPos(int val, int pos) {
    if (pos == 1) {
        insertFront(val);
        return;
    }
    struct Node* newNode = createNode(val);
    struct Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;
    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFront() {
    if (head == NULL) {
        printf("List empty!\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteEnd() {
    if (head == NULL) {
        printf("List empty!\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}

void deleteAtPos(int pos) {
    if (head == NULL) {
        printf("List empty!\n");
        return;
    }
    if (pos == 1) {
        deleteFront();
        return;
    }
    struct Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range!\n");
        return;
    }
    struct Node* delNode = temp->next;
    temp->next = temp->next->next;
    free(delNode);
}

void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    printf("Insert Front: 10, 20\n");
    insertFront(10);
    insertFront(20);
    display();

    printf("Insert End: 30\n");
    insertEnd(30);
    display();

    printf("Insert at Pos 2: 15\n");
    insertAtPos(15, 2);
    display();

    printf("Delete Front\n");
    deleteFront();
    display();

    printf("Delete End\n");
    deleteEnd();
    display();

    printf("Delete at Pos 2\n");
    deleteAtPos(2);
    display();

    return 0;
}
