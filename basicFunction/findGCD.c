#include <stdio.h>

long int findGcd(long int,long int);

long int findGcd(long int num1, long int num2)
{
  long int result;;
  int i;
  for(i=2;i<=num1;i++){
    if(num1%i ==0 && num2%i ==0){
      result = i;
    }
  }
  return result;
}

int main(void)
{
  unsigned long int num1;
  unsigned long int num2;
  printf("enter first number : ");
  scanf("%lu",&num1);
  printf("enter second number : ");
  scanf("%lu",&num2);
  printf("greatest common divisor of %lu and %lu is %ld\n",num1,num2,findGcd(num1,num2));
  return 0;
}
