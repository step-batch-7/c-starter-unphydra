#include <stdio.h>

float findAverage(float,float,float );

float findAverage(float a,float b,float c)
{
  return (a+b+c) / 3;
}


int main(void)
{
  float a,b,c;
  printf("enter three numbers separated by coma : ");
  scanf("%f,%f,%f",&a,&b,&c);
  printf("greatest of %f,%f,%f is %f\n",a,b,c,findAverage(a,b,c));
  return 0;
}
