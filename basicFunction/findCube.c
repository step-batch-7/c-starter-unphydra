#include <stdio.h>

long int findSquare(long int);
long int findCube(long int);

long int findSquare(long int num)
{
  return num * num;
}

long int findCube(long int num)
{
  return findSquare(num) * num;
}

int main(void)
{
  long int number;
  printf("enter the number : ");
  scanf("%ld",&number);
  printf("cube of %ld is %ld\n",number,findCube(number));
  return 0;
}
