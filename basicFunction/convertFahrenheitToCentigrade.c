#include <stdio.h>

float getCentigrade(float);

float getCentigrade(float f)
{
  return ((f-32)/9) * 5;
}

int main(void)
{
  float f;
  printf("enter fahrenheit value : ");
  scanf("%f",&f);
  printf("%f degree fahrenheit is equal to %f degree centigrade",f,getCentigrade(f));
  return 0;
}
