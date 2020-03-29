#include <stdio.h>
#include <math.h>

void getCurrencyBreakDown(long int);
long int getRemainingBalance(long int, int);

long int getRemainingBalance(long int balance, int rupee)
{
  long double current = balance;
  printf("%f * Rs %d\n", floor(current/rupee), rupee);
  return balance % rupee;
}


void getCurrencyBreakDown(long int money)
{
  long int current  = money;
  current = getRemainingBalance(current,2000);
  current = getRemainingBalance(current,500);
  current = getRemainingBalance(current,200);
  current = getRemainingBalance(current,100);
  current = getRemainingBalance(current,50);
  current = getRemainingBalance(current,10);
  current = getRemainingBalance(current,5);
  getRemainingBalance(current,1);
}

int main(void)
{
  long int money;
  printf("enter the money to get breakDown : ");
  scanf("%ld",&money);
  printf("currency breakdown of Rs %ld is follow\n",money);
  getCurrencyBreakDown(money);
  return 0;
}
