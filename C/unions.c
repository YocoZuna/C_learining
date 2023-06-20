#include <stdio.h>
#include <time.h>
#include <stdlib.h>
union student{
    char letterGrade;
    int raoundedGrade;
    float exactGrade;


};

int main(void)
{
    union student var1,var2;
    srand(time(NULL));
    var1.exactGrade = rand();
    var1.raoundedGrade = rand();
    var1.letterGrade = rand();

    var2.exactGrade = 5.0;
    var2.letterGrade  = 'A';
    var2.raoundedGrade = 5;

    printf("%c %f %d\n",var1.letterGrade,var1.exactGrade,var1.raoundedGrade);
    printf("%c %f %d\n",var2.letterGrade,var2.exactGrade,var2.raoundedGrade);

}