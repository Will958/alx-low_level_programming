#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input string
 *@accept: input string
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
  int x, y;
  char *p;
  p = 0;
  for (x = 0; s[x] != '\0'; x++)
    {
      for (y = 0; accept[y]; y++)
	{
	  if (accept[y] == s[x])
	    {
	      p = &s[x];
	      return (p);
	    }
	}
    }
  return (p);
}
