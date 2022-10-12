#include <stdio.h>
#include <string.h>




void ReverseString(char String[])
{
    /*
    *
    @fn                ReversedString
    * 
    @brief             This function return reversed string
    *
    @ param1           string[]  
    * 
    @ return            none
    *
    @note               none
    */

    char string[20];
    int size  = strlen(String);
    strcpy(string,String);
    for(int i = 0; i < size;i++)
    {
        String[i] = string[(size-i)-1]; // -1 cuz first char in new array will be NULL char, iteration starts from n-1 element
    }
    /*
    *   for(int i=0; i>0;i--)
    *   {
    *       printf("%c",String[i]);
    * 
    * 
    *   }
    */

    
}

void BubbleSort(char Array[])
{

}

int main(void)
{
    char BubbleSortArray[3];
    char Siema[] = "SGNIR DROLll";
    ReverseString(Siema);
    printf("%s",Siema);
        


}
