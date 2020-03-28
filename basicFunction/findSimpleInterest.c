#include <stdio.h>

long double findSimpleInterest(int,int,float);

long double findSimpleInterest(int sum,int interest,float time)
{
  return (sum*interest*time) / 100;
}

int main()
{
  long int sum;
  long int interest;
  long int time;
  printf("enter the principle amount : ");
  scanf("%ld",&sum);
  printf("enter the rate of interest : ");
  scanf("%ld",&interest);
  printf("enter the time period in year : ");
  scanf("%ld",&time);
  printf("simple interest for the sum : %ld, interest : %ld, time : %ld is %Lf\n",sum,interest,time,findSimpleInterest(sum,interest,time));
  return 0;
}
