#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
int main(void)
{
    FILE *pFile = NULL;

    char filename[]  = "text.txt";
    pFile = fopen(filename,"w");

    /*

    Zapisa pojedynczego znaku do pliku :D 
    Gdy zapis sie powidół zwraca wartosc zapisnaa jesli nie to EOF 
    if((fputc('c',pFile)==EOF))
    {
        perror("Nie udało się zapisać!\n");
        return(-1);
    }    
    else
    {
        printf("Pomyśnie zapisano do pliku\n");
    }

    */
   
   fputs("Siema Elo",pFile);
   fputs("Witamy w Hgaer",pFile);



   fclose(pFile);
   pFile = NULL;
}