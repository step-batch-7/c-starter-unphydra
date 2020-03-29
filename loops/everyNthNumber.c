#include <stdio.h>

void getNthNumbersBetweenTwoNumbers(long int,long int,long int);

void getNthNumbersBetweenTwoNumbers(long int startNum,long int stopNum,long int increment)
{
  long int number = startNum;
  while(number<=stopNum)
  {
    printf("%ld\n",number);
    number+=increment;
  }
}

int main(void)
{
  long int startNum, stopNum, increment;
  printf("enter start number : ");
  scanf("%ld",&startNum);
  printf("enter stop number : ");
  scanf("%ld",&stopNum);
  printf("enter increment : ");
  scanf("%ld",&increment);

  printf("every %ldth number between %ld and %ld is\n",increment, startNum,stopNum);
  getNthNumbersBetweenTwoNumbers(startNum,stopNum,increment);
  return 0;
}