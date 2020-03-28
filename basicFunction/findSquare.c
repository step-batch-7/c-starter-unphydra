#include <stdio.h>

long int findSquare(long int);

long int findSquare(long int num)
{
  return num * num;
}

int main(void)
{
  long int number;
  printf("enter the number : ");
  scanf("%ld",&number);
  printf("square of %ld is %ld\n",number,findSquare(number));
  return 0;
}
