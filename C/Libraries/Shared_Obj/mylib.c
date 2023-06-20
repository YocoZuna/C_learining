#include "mylib.h"
#include <stdio.h>
int MyLib_Calcluate_Lenth_Of_String(char* string);
void MyLib_Concatenate_To_Strings(char *string1,char*string2,char* dest);
void MyLib_COpy_String(char* source,char*dest);
void fun1(void);


int MyLib_Calcluate_Lenth_Of_String(char* string)
{
    int count = 0;
    while(*string !='\0')
    {
        count++;
        string++;
    }
    return count;
}

void MyLib_COpy_String(char* source,char*dest)
{
    while(*source != '\0')
    {
        *dest = *source;
        source++;dest++;
    }
}

void MyLib_Concatenate_To_Strings(char *string1,char*string2,char* dest)
{
        while(*string1 != '\0')
        {
            *dest = *string1;
            string1++;dest++;
        }

        while(*string2 != '\0')
        {
            *dest = *string2;
            string2++;dest++;
        }
}
void fun1(void)
{
    printf("Hello world");
}