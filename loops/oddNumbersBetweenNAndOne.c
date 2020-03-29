#include <stdio.h>

void oddNumbersBetweenNumberAndOne(long int);

void oddNumbersBetweenNumberAndOne(long int startNUm)
{
  long int number = startNUm;
  while (number>=1)
  {
    if(number%2!=0)
    {
      printf("%ld\n",number);
    }
    number--;
  }
}

int main(void)
{
  long int startNum;
  printf("enter number : ");
  scanf("%ld",&startNum);
  printf("odd numbers between %ld and 1 is\n", startNum);
  oddNumbersBetweenNumberAndOne(startNum);
  return 0;
}