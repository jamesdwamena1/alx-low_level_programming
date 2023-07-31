#include "main.h"

/**
  *_memset - fills memory with constant byte
  *@s: starting address of memory to be filled
  *@b: char to copy
  *n: number of bytes to be changed
  *
  *return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	for (i = 0; i < n; i++)
			s[i] = b;
			n--;
		}
		return (s);
}
