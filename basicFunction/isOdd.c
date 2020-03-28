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
  printf("%d is %s number\n",number,isEven(number)?"not an odd":"an odd");
  return 0;
}