#include <stdio.h>
#include <time.h>
#include<stdbool.h>
 
#define YEARS 5
#define MONTHS 12

int main () 
{
    int i,j;
    float avg=0;
    float yearRainFall,yearAvg=0,monthRainFall[MONTHS];
    float rain[YEARS][MONTHS] =  
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}, //2010
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3}, //2011
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4}, //2012
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2}, //2013
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}  //2014
    };
    printf("Year\t Rain fall\n");
    for(i = 0;i<YEARS;i++)
    {
        avg=0;
        for(j=0;j<MONTHS;j++)
        {
            avg = avg+rain[i][j]; // Zliczanie ilosci opadów w danym roku

            
        }
        printf("%d %10.2f\n",2010+i,avg);
        yearAvg+=avg; 
        
    } 
    yearAvg = yearAvg/5;
    printf("Year avg: %.2f\n",yearAvg);
    for(i=0;i<MONTHS;i++)
    {
        monthRainFall[i] = 0;
        for(j=0;j<YEARS;j++)
        {
            monthRainFall[i]+=rain[j][i];
        }
    monthRainFall[i] = monthRainFall[i]/5;
    printf("%5.2lf\t",monthRainFall[i]);
    }
    

    
}