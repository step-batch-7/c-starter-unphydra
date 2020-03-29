#include <stdio.h>

long int getFactorial(long int);
long int sumOfNumbers(long int, long int);


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

long int productOfNumbres(long int startNum, long int number)
{
  return getFactorial(startNum + number - 1) / getFactorial(startNum - 1);
}



int main(void)
{
  long int startNum, numbers;
  printf("enter starting number : ");
  scanf("%ld",&startNum);
  printf("enter how many number : ");
  scanf("%ld",&numbers);
  printf("product of %ld numbers from %ld is %ld\n",numbers,startNum,productOfNumbres(startNum,numbers));
  return 0;
}
