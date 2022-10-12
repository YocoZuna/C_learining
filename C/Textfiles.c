#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    
    FILE* pFile = NULL;
    char filename[] = "text.txt.";
    char filecontents[30];
    //Reading and writing file
    
    pFile = fopen(filename,"a");
    if(pFile==NULL)
        printf("Something went wrong wwhen opening file %s\n",filename);
    else
        fscanf(pFile,"%s",filecontents);
        if(fclose(pFile)==EOF)
            printf("Program couldnt close the file!\n");
        else
            printf("File %s has been closed",filename);
            pFile = NULL; // Bardzo wazne poniewaz wskaznik wskazuje wtedy a jak niewiadomo co !!!!
    
   /*
   *    Changing name of the file 
   
    if(rename("text.txt","SiemaEniu.txt")) // rename zwraca 1 gdy cos nie pykło :D
        printf("Something went wron!\n");
    else 
        printf("You have change name\n");
    */

}