/*
*
*@file 3_money.c
*
*@date October 15, 2019
*
*@brief Find the minimum number of coins to change the banknote specified by the user.
*
*/
#include<stdio.h>

int main (void)
{
  int banknote;

  /* Reading of the banknote from user */
  printf("\n/************** The money changer **************/\n");
  printf("Available banknotes sizes: €50, €20, €10, €5\n");
  printf("\n-> Insert the banknote value to change: ");
  scanf("%d", &banknote);

  /* Exceptions handling */
  if(banknote != 50 && banknote != 20 && banknote != 10 && banknote != 5)
  {
    printf("\nI'm sorry, I can not change a €%d banknote ;(\n\n", banknote);
    return 0;
  } /* End of if*/

  /* €2 coins number */
  printf("\nNumber of €2 coins = %d\n", banknote/2);
  banknote = banknote%2;

  /* €1 coins number */
  printf("Number of €1 coins = %d\n\n", banknote);

  return 0;
} /* End of main */
