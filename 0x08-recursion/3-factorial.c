#include "main.h"
/**
  *factorial- returns the factorial of number
  @n: number to return the factorial
  *return: factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	if (n==0)
		return(1);
	return(n * factoriaal(n-1));
}