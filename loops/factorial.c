#include <stdio.h>

long int getFactorial(long int);

long int getFactorial(long int num)
{
  if(num<1){
    return 0;
  }
  long int result = 1;
  int i;
  for(i=1;i<=num;i++){
    result *=i;
  }
  return result;
}

int main(void)
{
  long int number;
  printf("enter the number : ");
  scanf("%ld",&number);
  printf("factorila of %ld is %ld\n", number,getFactorial(number));
  return 0;
}
