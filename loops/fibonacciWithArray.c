#include <stdio.h>

void getFibonacciSeries(int * ar, int term);

void getFibonacciSeries(int * ar, int term)
{
  int a = -1;
  int b = 1;
  int result = 0;
  for(int i=0; i<term; i++)
  {
    result = a+b;
    ar[i] = result;
    a= b;
    b= result;
  }
}


int main(void)
{
  int term;
  printf("enter number of term : ");
  scanf("%d",&term);
  int array[term];

  getFibonacciSeries(array,term);

  for(int i=0; i<term; i++)
  {
    printf("%d\n",array[i]);
  }

  return 0;
}
