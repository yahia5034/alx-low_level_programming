#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - check if the number is +ve or -ve or zero
 *Return - Always 0.
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)
	  {
	    printf("is positive");
	  }
	else if(n==0)
	  { 
	    printf("is zero");
	  }
	else
	  {
	    printf("is negative");
	  }
	return (0);
}
