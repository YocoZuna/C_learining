#include <stdio.h>

void swap(int* a,int* b);
void squareMySelf(int * const  a);

int main(void)
{
    /*
    int x=100, y=200;
    swap(&x,&y);
    printf("x:%d\ny:%d\n",x,y);
    */
   int num = 4;
   squareMySelf(&num);
   printf("%d",num);
}

void squareMySelf(int * const   a)
{
    
    *a= (*a) * (*a);
}

void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}