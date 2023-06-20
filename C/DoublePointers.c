#include <stdio.h>
#include <malloc.h>
#include <string.h>
void allocateMemory(char **dupa)
{
    *dupa = (char*)malloc(255);
    
}


int main(void)
{
    /*
    First exercise

    int var1= 2;
    int* pvar1 = NULL;
    int** pvar2 = NULL;
    pvar1 = &var1;
    pvar2 = &pvar1;

    printf("%d",**pvar2);
    */

   /* Second exercise using double pinter*/
    char *ptr = NULL; //Creating single pointer
    allocateMemory(&ptr); 
    *ptr = 'H';
    printf("%c",*ptr);
    free(ptr);
}