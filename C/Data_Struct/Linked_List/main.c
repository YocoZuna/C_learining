#include <stdio.h>
#include "LL.h"
static void displayMenu(void);


int main(int, char**){
    ListNodePtr head = NULL;
    int choice = 0;
    char item  = 'c';
    displayMenu();
    scanf("%d",&choice);

    while(choice !=6)
    {
        switch (choice){
            case 1:
                printf("Enter a character: ");
                scanf("\n%c",&item);
                insert(&head,item);
                printList(head);
            case 2:
                printf("Enter a character: ");
                scanf("\n%c",&item);
                insertAtENd(&head,item);
                printList(head);
                case 3:
                printf("Enter a character: ");
                scanf("\n%c",&item);
                insertAtBegining(&head,item);
                printList(head);
            case 4:
                if(!isEmpty(head))
                {
                    printf("Enter character to delete \n");
                    scanf("\n%c",&item);
                
                    if (delate(&head,item))
                    {
                        printf("%c delated \n",item);
                    }
                    else{
                        printf("%c not found",item);
                    }
                }
                else
                {
                    printf("List is empty \n");
                }
            case 5:
                if(!isEmpty(head))
                {
                    delateAtBegining(head);
                    
                    printf("%c delated \n",item);
                }
                else{
                    printf("%c not found",item);
                }
                
        };

    }
    /* We will have to clean up meamory*/
}


static void displayMenu(void)
{
    printf("Enter your choice\n"
    "1. to inster an element into the list in alphabetical order \n"
    "2. to insert an element at the end of the list \n"
    "3. to insert an element at the begginning of the list \n"
    "4. to delete an element from the list \n"
    "5. to delete an element from the beggining of the list \n"
    "6. to end the program \n"
    );
    
}