#include <stdio.h>

int getOddNumberSeries(long int);

int getOddNumberSeries(long int num)
{
  long int i;
  for(i=1;i<=num;i++)
  {
    if(i%2!=0)
    {
      printf("%ld\n",i);
    }
  }
  return 0;
}

int main(void)
{
  long int number;
  printf("enter the number : ");
  scanf("%ld",&number);
  printf("odd number series upto %ld is\n", number);
  getOddNumberSeries(number);
  return 0;
}
