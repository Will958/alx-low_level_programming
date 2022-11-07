#include <unistd.h>
/**
 *_putchar - writes character c to stdout
 *@c: charcter to print
 *Return: 1 on success
 *On error, -1 is returned, and errno is set apropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
