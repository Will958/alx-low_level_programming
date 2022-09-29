#include "main.h"
/**
 *_strspn - gets length of a prefix substring
 *@s: scanned string
 *@accept: accept string
 *Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, j, k = 0;
  i = 0;
  while (s[i] != '\0')
    {
      if (s[i] != 32)
	{
	  j = 0;
	  while (accept[j] != '\0')
	    {
	      if (accept[j] == s[i])
		{
		  k = k + 1;
		}
	      j++;
	    }
	}
      else
	return (k);
      i++;
    }
  return (k);
}
