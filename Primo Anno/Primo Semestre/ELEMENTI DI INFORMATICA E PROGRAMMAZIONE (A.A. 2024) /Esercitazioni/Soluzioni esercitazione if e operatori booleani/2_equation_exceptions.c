/*
*
*@file 2_equation_exceptions.c
*
*@date October 15, 2019
*
*@brief calculation of the solutions of a second degree equation.
*
*/

#include <stdio.h>
#include <math.h>

/* main function definition */
int main (void)
{
  /* Useful variables declaration */
  float x1, x2, a, b, c;
  int delta;

  /* Data from the standard input */
  printf("\n/*** Equation solver ***/\n-> Insert equation: ax^2 + bx + c = 0\n\n");
  printf("a = ");
  scanf("%f", &a);
  printf("b = ");
  scanf("%f", &b);
  printf("c = ");
  scanf("%f", &c);

  /* Data printed in standard output */
  printf("\n/*** My equation ***/\n\n");
  printf("%fx^2 + %fx + %f = 0\n", a, b, c);

  /* exceptions management */
  if(a == 0) /* It is a first degree equation! */
  {
    if(b == 0)
    {
      if(c == 0)
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
    x1 = -c/b;

    /* Result printed in stdOutput */
    printf("\n/*** Result ***/ \n");
    printf("x = %f\n\n", x1);

    return 0;
  } /* End of if */

  delta = b*b - 4*a*c;

  if(delta < 0)
  {
      printf("\nThe equation is impossible\n\n");
      return 0;
  }

  /* Calculation of the results */
  x1 = (-b - sqrt(delta))/(2*a);
  x2 = (-b + sqrt(delta))/(2*a);

  /* Results printed in stdOutput */
  printf("\n/*** Results ***/ \n");
  printf("x1 = %f\nx2 = %f\n\n", x1, x2);

  return 0;
} /* end of main */
