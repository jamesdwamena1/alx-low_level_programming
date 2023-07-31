#include "main.h"

/**
  *memcpy - a function tha copies memory area
  *n: number of bytes
  *@dest: to memory area
  *@src: memory where is copied
  *
  *return: a pointer to @dust
  */
char *_memcpy(char *dest, char *src, unsigned int n)
	{  
	unsigned int i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
