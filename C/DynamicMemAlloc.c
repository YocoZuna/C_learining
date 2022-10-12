#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    /*
    char* str = (char*) malloc(15*sizeof(char));
    strcpy(str,"Hello World\n");

    printf("%s %#x",str,str);
    printf("%p",sizeof(str));

    free(str);
    */

    /*CHALLENGE*/
    int lettersNumber = 0;
    char* userInput = NULL;
    printf("Enter number of letters in string that you gonna input\n");
    scanf("%d",&lettersNumber);
    userInput = (char*) calloc(lettersNumber,sizeof(char));
    if(userInput != NULL)
    {
        scanf("%[^\n]s",userInput);
        printf("%s",userInput);
    }
    
    free(userInput);


}