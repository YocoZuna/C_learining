#include "LL.h"
#include <stdlib.h>



void insertAtBegining(ListNodePtr* head,char value)
{
    ListNodePtr new_node = malloc(sizeof(Node_t));
    new_node->data = value;
    new_node->nextNode = *head;
    *head = new_node;
}
void insertAtENd(ListNodePtr* head,char value);
void insert(ListNodePtr* head,char value);
char delate(ListNodePtr* head,char value);
void delateAtBegining(ListNodePtr* head);
int isEmpty(ListNodePtr head);
void printList(ListNodePtr currentPtr);