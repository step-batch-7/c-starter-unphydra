#include <stdio.h>

int isEven(int);

int isEven(int num)
{
  if(num%2==0){
    return 1;
  } 
  return 0;
}

int main(void)
{
  int number;
  printf("Enter the number : ");
  scanf("%d",&number);
  printf("is %d a odd number? %s\n",number,isEven(number)==0?"true":"false");
  return 0;
}