#include <stdio.h>

int GreatestCommonDivisor(int firstNumber,int secondNumber)
{
  if (firstNumber < 0 ) 
  {
    return -1;
  }
  
  if (secondNumber< 0 ) 
  {
    return -1;
  }
  
  // Implementation of Euclides algorithm 
  int restOfModuloDivisor = firstNumber%secondNumber,iterator;
  while(restOfModuloDivisor!=0)
  {
   iterator = restOfModuloDivisor;
   restOfModuloDivisor = secondNumber%restOfModuloDivisor;
   secondNumber = iterator;
    
  }
  return iterator;
}
float AbsoluteValueOfANumber(float a)
{
    return a;
}
int SquareRoot(int a)
{
    // Jesli a negatywne to wywołac komunikat
    return a;
}

int main(void)
{
 /////*************************************************************GCD*********************************************///
  int firstNumber,secondNumber;  
  printf("GreatestCommonDivisor:\n"
  "Insert numbers starting whith biggest number\n"
  "First number: ");
  scanf("%d",&firstNumber);
  printf("Second number: ");
  scanf("%d",&secondNumber);

  int gdcResult = GreatestCommonDivisor(firstNumber,secondNumber);
  if(gdcResult == -1 ) 
  {
    printf("Numbers have to be greater than 0!\n");
  }
  else
  {
  printf("Gcd result %d",gdcResult);
  }
  /////*************************************************************GCD*********************************************///
}

