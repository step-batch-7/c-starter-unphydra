#include <stdio.h>

void decryptMessage(int*,int);

void decryptMessage(int* array ,int size)
{
  int i;
  for(i=0; i<size; i++)
  {
    int value = array[i];
    if(value>=97&&value<=122)
    {
      value = value + 13;
      if(value>122){
        value = 96 + (value%122);
      }
      array[i] = value;
    }
  }
}


int main(void)
{
  int numbers[9] = {116, 98, 32, 112,98, 101, 98, 97, 110};
  int size = sizeof(numbers) / sizeof(int);
  printf("decrypt msg is : ");
  decryptMessage(numbers,size);
  for(int i=0; i <size; i++)
  {
    printf("%c",numbers[i]);
  }
  return 0;
}
