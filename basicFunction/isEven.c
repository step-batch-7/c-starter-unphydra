#include <stdio.h>

int isEven(int);

int isEven(int num)
{
  return num%2==0;
}

int main(void)
{
  int number;
  printf("Enter the number : ");
  scanf("%d",&number);
  printf("%d is %s number\n",number,isEven(number)?"an even":"not an even");
  return 0;
}
