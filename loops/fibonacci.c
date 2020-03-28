#include <stdio.h>

int getFibonacci(int);

int getFibonacci(int num)
{
  int first = -1, second = 1, result = 0,i;
  for(i=0;i<num; i++)
  {
    result = first+second;
    printf("%d\n",result);
    first = second;
    second = result;
  }
  return 0;
}

int main(void)
{
  int number;
  printf("enter the number : ");
  scanf("%d",&number);
  printf("fibonacci upto %d series is\n", number);
  getFibonacci(number);
  return 0;
}
