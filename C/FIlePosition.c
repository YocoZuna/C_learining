#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* restrict pFile = NULL;
    char filename[] = "text.txt";
    pFile = fopen(filename,"a+");
    fclose(pFile);
    FILE* panother = NULL;
    pFile = NULL;
    panother = fopen(filename,"r");
    if (panother == NULL)
    {
        perror("Ouch!\n");
        return (-1);
    }
    fseek(panother,0,SEEK_END);
    long position = ftell(panother);

    printf("%ld",position);
    fclose(panother);
}