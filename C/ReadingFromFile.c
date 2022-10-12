#include <stdio.h>
#include <stdint.h>


int main(void)
{
    FILE *pFile = NULL;
    char str[60];
    int c;

    pFile = fopen("text.txt","r");
    
    if(pFile==NULL)
    {
        perror("Something went wrong!\n");
        return(-1);
    }
    /*
    FGETC
    while((c=fgetc(pFile))!=EOF)
    {  
        printf("%c",c);
    }
    */
   /*
    while(fgets(str,60,pFile)!=NULL)
        printf("%s",str);

    fclose(pFile);
    pFile = NULL;
    */
    /*
        FSCANF
    */
}