#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int GiveTheSizeOfString(char Buffer[])
{
    int count = 0;
    for(char i = 0; Buffer[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void ConcatinateTwoString( char str1[], char str2[],char result[])
{
    int sizeOfstr1 = strlen(str1),sizeOfstr2 = strlen(str2),i;

    //Adding str1 to result array
    for(i = 0; i < sizeOfstr1;i++)
    {
        result[i] = str1[i];
    }
    //Adding str2 to  result array
    
    for( i = 0; i < sizeOfstr2;i++)
    {
        result[i+sizeOfstr1] = str2[i];
    }
    sizeOfstr2 = strlen(result);//Adding NULL char to the end of the array
  //  result[sizeOfstr2+1] += {'\0'};

}

bool CompareTwoString(const char str1[],const char str2[])
{
    int count = 0;
    
    if(str1[0]==str2[0])
    {
        
       for(char i = 0; (str1[i] == str2[i] && i<strlen(str1));i++)
       {
        count++;
       }
            
      
    }
    if (count!= strlen(str1) || count != strlen(str2)) return false;
    else return true;
}

void ReverseString( char string[])
{
    const int size  = strlen(string);
    char reserved[100];
    

    int count = 0;
    for(char i = 0; string[i]!='\0';i++)
    {
        reserved[i] = string[i];
        
    }
    for(char i = 0; reserved[i]!='\0';i++)
    {
        string[i] = reserved[size-i];
        
    }
}

int main(void)
{
    char reversed[100];
    char Seima[] = {"Siema"};
    ReverseString(Seima);
    printf("%s",reversed);
/*
char Array[]  = {"123456789"};
char Siema[] = {"Siema"};
char Naura[] = {"nAURA"};
char Result[50];
printf("%d",GiveTheSizeOfString(Array));
printf("%d",CompareTwoString("DSa","DSu"));
ConcatinateTwoString(Siema,Naura,Result);
printf("%s",Result);
*/
}