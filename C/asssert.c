
#include <stdio.h>
#include <limits.h>
#define NDEBUG // If you define it before including assert.h it will disable all asserts
#include <assert.h>
#undef NDEBUG
int main(void)
{
    char buff[10];
    int x=0,y=10;
    int d = 0;
    scanf("%d",&d);
    /*for(int i=x;i<20;i++)
    {
        assert(x>y);  // Run time assert
    }
    */
    //static_assert(sizeof(buff)!=10,"Zadeklarowany buffor jest za maly");
    static_assert(CHAR_MIN==0,"Kod nie zadziała char jest signed!");
    //assert(sizeof(buff)==10);
}