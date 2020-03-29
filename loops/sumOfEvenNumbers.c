#include <stdio.h>

long int getSumOfEvenNumbersBetweenTwoNumbers(long int,long int);

long int getSumOfEvenNumbersBetweenTwoNumbers(long int startNUm,long int stopNum)
{
  long int number = startNUm;
  long int result = 0;
  while (number<=stopNum)
  {
    if(number%2==0)
    {
      result +=number;
    }
    number++;
  }
  return result;
}

int main(void)
{
  long int startNum, stopNum;
  printf("enter start number : ");
  scanf("%ld",&startNum);
  printf("enter stop number : ");
  scanf("%ld",&stopNum);
  printf("sum of even numbers between %ld and %ld is %ld\n", startNum,stopNum,getSumOfEvenNumbersBetweenTwoNumbers(startNum,stopNum));
  return 0;
}