#include "stdlib.h"
#include "string.h"
#include "stdio.h"

typedef struct DataNode {
    char* data;
    struct DataNode* next;
    int position;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

DataNode* createDataNode(char* data);
SinglyLinkedList* createSinglyLinkedList();
void traverse(SinglyLinkedList* list);
void insert_front(SinglyLinkedList* list, char* data);
void insert_last(SinglyLinkedList* list, char* data);
void delete(SinglyLinkedList* list, char* data);

// Crete Node
DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));

    newNode->data = (char*)malloc(sizeof(strlen(data) + 1));
    strcpy(newNode->data, data);
    newNode->next = NULL;
    newNode->position = 0;

    return newNode;
}

//Crete SinglyLinkedList
SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* newSinglyLinkedList = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));

    newSinglyLinkedList->count = 0;
    newSinglyLinkedList->head = NULL;

    return newSinglyLinkedList;
}

// Traverse
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("Empty");
        return;
    }
    DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s ->", pointer->data);
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}

//Insert Data to front
void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        pNew->next = list->head;
        list->head = pNew;
    }

    list->count++;
    pNew->position = list->count;
}

//Insert data to last
void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);

    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode* pointer = list->head;
        while (pointer->next != NULL) {
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
    pNew->position = list->count;
}

// Delete data
void delete(SinglyLinkedList* list, char* data) {
    DataNode* current = list->head;
    DataNode* previous = NULL;
    if (list->count == 0) {
        printf("Empty");
        return;
    }
    while (current != NULL && strcmp(current->data, data) != 0) {
        previous = current;
        current = current->next;
    }
    if (current == NULL) {
        printf("Can't Delete");
        return;
    } 
    else if (current == list->head) {
        list->head = current->next;
    }
    else {
        previous->next = current->next;
    }

    free(current->data);
    free(current);
    list->count--;
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();

    int n;
    char condition;
    char data[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data); // Read condition and string data

        if (condition == 'F') {
            insert_front(mylist, data);
        } 
        else if (condition == 'L') {
            insert_last(mylist, data);
        } 
        else if (condition == 'D') {
            delete(mylist, data);
        } 
        else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    DataNode* current = mylist->head;

    while (current->next != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}