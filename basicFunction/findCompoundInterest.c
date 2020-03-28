#include <stdio.h>
#include <math.h>

long double findCompoundInterest(int,float,float);

long double findCompoundInterest(int sum,float interest,float time)
{
  long double finalAmount = sum * pow((1+interest/100),time);
  printf("%Lf",finalAmount);
  return finalAmount - sum;
}

int main()
{
  long int sum;
  float interest;
  float time;
  printf("enter the principle amount : ");
  scanf("%ld",&sum);
  printf("enter the rate of interest : ");
  scanf("%f",&interest);
  printf("enter the time period in year : ");
  scanf("%f",&time);
  printf("compound interest for the sum : %ld, interest : %f, time : %f is %Lf\n",sum,interest,time,findCompoundInterest(sum,interest,time));
  return 0;
}


