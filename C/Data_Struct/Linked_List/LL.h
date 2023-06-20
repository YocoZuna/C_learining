#include <stdio.h>


typedef struct node{
    char data;
    struct node *nextNode;
}Node_t;

typedef Node_t * ListNodePtr;

void insertAtBegining(ListNodePtr* head,char value);
void insertAtENd(ListNodePtr* head,char value);
void insert(ListNodePtr* head,char value);
char delate(ListNodePtr* head,char value);
void delateAtBegining(ListNodePtr* head);
int isEmpty(ListNodePtr head);
void printList(ListNodePtr currentPtr);
