#include <stdarg.h>
#include  <stdio.h>
#include <stdnoreturn.h>


void varidadic(int i,...); // ... is eclipsis In function prototype you need to have at least one known var 

noreturn void upa(int i);


int main(void)
{
    //debug(2,3,4,5,6);
    upa(4);
}


void varidadic(int i,...)
{
    va_list parg;

    va_start(parg,i);
    double tic = va_arg(parg,double);

    va_end(parg);
    printf("%lf",tic);
}

void upa(int i)
{
    exit(0); // If we use no return and does not exit in this funtion we get undefined behavior
}