#include <stdio.h>

float getFahrenheit(float);

float getFahrenheit(float c)
{
  return ((c/5)*9) +32;
}

int main(void)
{
  float c;
  printf("enter centigrade value : ");
  scanf("%f",&c);
  printf("%f degree centigrade is equal to %f degree fahrenheit\n",c,getFahrenheit(c));
  return 0;
}
