/*
*
*@file 1_equation_exceptions.c
*
*@date October 15, 2019
*
*@brief calculation of the solution of a first degree equation (with exceptions handling).
*
*/

#include <stdio.h>

/* main function definition */
int main (void)
{
  /* Useful variables declaration */
  float x, a, b;

  /* Data from the standard input */
  printf("\n/*** Equation solver ***/\n-> Insert equation: ax + b = 0\n\n");
  printf("a = ");
  scanf("%f", &a);
  printf("b = ");
  scanf("%f", &b);

  /* Data printed in standard output */
  printf("\n/*** My equation ***/\n\n");
  printf("%fx + %f = 0\n", a, b);

  /* Exceptions Handling */
  if(a == 0)
  {
    if(b == 0)
    {
      printf("\nThe equation is an identity\n\n");
    }
    else
    {
      printf("\nThe equation is impossible\n\n");
    }

    return 0;
  } /* End of if */

  /* Calculation of the result */
  x = -b/a;

  /* Result printed in stdOutput */
  printf("\n/*** Result ***/ \n");
  printf("x = %f\n\n", x);

  return 0;
} /* end of main */
