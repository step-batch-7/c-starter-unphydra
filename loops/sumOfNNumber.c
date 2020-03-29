#include <stdio.h>

long int sumOfNaturalNumbers(long int);
long int sumOfNumbers(long int, long int);


long int sumOfNaturalNumbers(long int num)
{
  return (num * (num + 1)) / 2;
}
long int sumOfNumbers(long int startNum, long int number)
{
  return sumOfNaturalNumbers(startNum + number - 1) - sumOfNaturalNumbers(startNum - 1);
}



int main(void)
{
  long int startNum, numbers;
  printf("enter starting number : ");
  scanf("%ld",&startNum);
  printf("enter how many number : ");
  scanf("%ld",&numbers);
  printf("sum of %ld numbers from %ld is %ld\n",numbers,startNum,sumOfNumbers(startNum,numbers));
  return 0;
}
