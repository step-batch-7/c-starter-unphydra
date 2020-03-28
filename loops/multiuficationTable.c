#include <stdio.h>

int getMultiplicationTable(long int,long int);

int getMultiplicationTable(long int num, long int upto)
{
  long int i;
  for(i=1;i<=upto;i++)
  {
      printf("%ld * %ld = %ld\n",num,i,num*i);
  }
  return 0;
}

int main(void)
{
  long int number, upto;
  printf("enter the number : ");
  scanf("%ld",&number);
  printf("upto : ");
  scanf("%ld",&upto);
  printf("multiplication table of %ld upto %ld is\n", number, upto);
  getMultiplicationTable(number, upto);
  return 0;
}
