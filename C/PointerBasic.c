#include <stdio.h>
#include <stdint.h>
#include <string.h>


int StringLength( const char *string);
int Add(int elo)
{
    
    return  ++elo;
}

int main(void)
{
    /*
    int var = 0;
    uint32_t * pvar = &var;
    
    printf("Address of the pointer %p\n",&pvar);
    printf("Value of the pointer %p\n",pvar);
    printf("Value that pointer is pointing %d\n",*pvar);
    printf("Var address %#x",&var);
    */
    
    /*
    int num1 = 0;
    int num2 = 0;
    int * pnum = NULL;

    pnum = &num1;
    *pnum = 2;
    ++num2;
    num2 += *pnum;

    pnum=&num2;
    ++*pnum;

    int b_reak;
    
   int values[100];
   int * pvalues = NULL;
   pvalues = values;
   *pvalues = 100;
    //pvalues[1] = 68;
   printf("%d,%d",values[0],values[1]);
    */

// Calculating the length of the string with pointer arthmetic 
/*
char string[] = "1   22   56";
int breeak;
breeak = StringLength(string);

printf("%d",breeak);
}

int StringLength( const char *string)
{
    const char* stringStart = string;
    
    while(*stringStart)
    {
        
        ++string;
    }
    
  
    return stringStart - string;

    */
   int elo = 2;
   int siema = Add(elo);
   int breeak;
}