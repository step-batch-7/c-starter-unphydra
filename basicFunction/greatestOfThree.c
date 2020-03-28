#include <stdio.h>

float findGreatest(float,float,float );

float findGreatest(float a,float b,float c)
{
  float result = a;
  if(result<b)
  {
    result = b;
  }
  if(result<c)
  {
    result = c;
  }
  return result;
}


int main(void)
{
  float a,b,c;
  printf("enter three numbers separated by coma : ");
  scanf("%f,%f,%f",&a,&b,&c);
  printf("greatest of %f,%f,%f is %f\n",a,b,c,findGreatest(a,b,c));
  return 0;
}
