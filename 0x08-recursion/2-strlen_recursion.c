#include "main.h"
/**
  *strlen_recursion - returns the lenght of the string
  *@S: string to be measured
  *return: lenght of string
  */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j += _strlen_recursion(s+1);
	}
	return(j);
}
