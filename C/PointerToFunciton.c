#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printSomething(char Tab[]);

int main(void)
{
char string[]  ="Hello World";
void (*p)(char*) = printSomething;

p(string);


}

void printSomething(char Tab[])
{
    printf("%s",Tab);
}