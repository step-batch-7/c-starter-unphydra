#include <stdio.h>

int getEvenNumberSeries(long int);

int getEvenNumberSeries(long int num)
{
  long int i;
  for(i=1;i<=num;i++)
  {
    if(i%2==0)
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
  printf("even number series upto %ld is\n", number);
  getEvenNumberSeries(number);
  return 0;
}
