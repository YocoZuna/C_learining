#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct  item 
{
    char* itemName;
    int quantity;
    float price;
    float amount;
};
struct item stuctItem;
void printItem(struct item *ITEM);

void readItem(struct item *ITEM);

int main(void)
{
    //struct item stuctItem;
    struct item* pitem = &stuctItem;
    pitem->itemName = (char*)malloc(sizeof(char)*20);
    if(!pitem)
        exit(0);
    readItem(pitem);
    printItem(pitem);
    free(pitem->itemName);
}

void readItem(struct item *ITEM)
{
    printf("Input item parameters\n");
    printf("Input item name: ");
    scanf("%s",ITEM->itemName);
    printf("Input item quantity: ");
    scanf("%d",&ITEM->quantity);
    printf("Input item price: ");
    scanf("%f",&ITEM->price);
   ITEM->amount = (ITEM->quantity) * (ITEM->price);
    
}
void printItem(struct item *ITEM)
{
    printf("Info about item\n");
    printf("Item name:%s\n",ITEM->itemName);
    printf("Item qquantity: %d\n",ITEM->quantity);
    printf("Item price: %f\n",ITEM->price);
    printf("Item amount : %c\n",ITEM->amount);
}


