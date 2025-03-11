/*
*
*@file 4_stars.c
*
*@date October 15, 2019
*
*@brief In order to find the nearest star given a N-dimensional group of stars (N from the user),
* it is possible to use an instrument that gives the opportunity to see K stars together (K from the user).
° M observations are needed. The program, given N and K calculates M.
*
*/

#include <stdio.h>
#include <math.h>

/* main function definition */
int main (void)
{
  /* declaration, respectively, of N, K and M */
  int starsNumber, detectedStars, observationsNumber;

  /* Print the system menù */
  printf("\n/********* Calculation of M (number of observations needed to find the nearest star in a group of N elements) *********/\n\n");

  printf("Insert the number of stars (N):");

  /* Reading N from the user */
  scanf("%d", &starsNumber);

  printf("Insert K, the number of stars that your instrument can detect (K can not be a null value):");

  /* Reading K from the user */
  scanf("%d", &detectedStars);

  /* if K = 0 gives an error and breaks execution */
  if(detectedStars == 0)
  {
    printf ("\n!ATTENTION! It seems that you can not see any star with your instrument! Change it and try again :)\n\n");
    return 0; /* The execution of the program stops here! */
  } /* end of if */

  /* if K < 0 or N < 0 gives an error and breaks execution */
  if(detectedStars < 0 || starsNumber < 0)
  {
    printf ("\n!ATTENTION! Both N and K must be positive.\n\n");
    return 0; /* The execution of the program stops here! */
  } /* end of if */

  /* Calculation of the minimum number of observations needed to find the nearest star.

     1- Each time an observation is made, from the group of K stars only one star is selected (the nearest);
     2- After one observation the distances of a group of N - (K - 1) have to be compared;
     3- This mean that, at the end, the number of stars seen is N - M*(K - 1) (remember that M is the total number of observations)
     4- N - M*(K - 1) = 1 if at the last observation we have to compare distances of a group of K stars;
     5- In general the last group of stars to be seen will be < K, so N - M*(K -1) <= 1 in general.

     -> M >= (N - 1)/(K - 1)

     At the end, two notes:

     - The number of observations must be an integer number;
     - Between all the integers solving the equation above, it is convenient to choose the minimum one. (Unless you like
        staying outside watching stars :) )

     M is chosen as the upper bound of the expression above (to do that there is the ceil function in math.h).

     The cast to float of "starsNumber" is needed. Without it the result of the division of two integer numbers is an integer!

     Example: N = 10 and K = 3.
     -> Without the cast (WRONG!!)
        - (N -1)/(K -1) = 9/2 = 4,5 -> 4
        - ceil(4) = 4.
     -> With the cast (CORRECT!!)
        - (N -1)/(K -1) = 9/2 = 4,5
        - ceil(4,5) = 5.

  */

  observationsNumber = ceil(((float)starsNumber - 1)/(detectedStars - 1));

  /* Print M on the screen */
  printf("Number of observations = %d\n\n", observationsNumber);

  return 0;
} /* end of main */
