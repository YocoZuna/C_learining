#include "mylib.h"
#include <stdio.h>

int main(void)
{
    char string1[20] = "Hello";
    char string2[20] = "WOrld";
    char string3[20] = "";
    int result  = MyLib_Calcluate_Lenth_Of_String(string1);
    printf("Result %d\n",result);
    MyLib_COpy_String(string1,string3);
    printf("Copyed string %s\n",string3);
    MyLib_Concatenate_To_Strings(string1,string2,string3);
    printf("Concat string %s\n",string3);
}
