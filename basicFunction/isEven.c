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
  printf("is %d a even number? %s\n",number,isEven(number)==1?"true":"false");
  return 0;
}
