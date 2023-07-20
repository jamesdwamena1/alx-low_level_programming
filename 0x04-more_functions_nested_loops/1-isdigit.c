#include "main.h"

/**
  *_isdigit - check if character is a digit 
  *@x: the number is checked
  *return: 1 for a character and 0 for any else
  */

int _isdigit(int x)
{
	if (x >=48 && x <= 57)
	{
	 return (1);
	}
	return (0);
}
