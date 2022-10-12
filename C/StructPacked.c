#include <stdio.h>
#include <stdint.h>
int main(void)
{
    struct __attribute__((__packed__)) struktura{
    
        uint8_t data;
    }Struktura;
    
    
    printf("%d",sizeof(Struktura));


}