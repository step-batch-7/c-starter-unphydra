#include <stdio.h>

void getOddNumbersBetweenTwoNumbers(long int,long int);

void getOddNumbersBetweenTwoNumbers(long int startNUm,long int stopNum)
{
  long int number = startNUm;
  while (number<=stopNum)
  {
    if(number%2!=0)
    {
      printf("%ld\n",number);
    }
    number++;
  }
}

int main(void)
{
  long int startNum, stopNum;
  printf("enter start number : ");
  scanf("%ld",&startNum);
  printf("enter stop number : ");
  scanf("%ld",&stopNum);
  printf("odd numbers between %ld and %ld is\n", startNum,stopNum);
  getOddNumbersBetweenTwoNumbers(startNum,stopNum);
  return 0;
}