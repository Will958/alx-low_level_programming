#include <stdio.h>
/**
 *main - prints it's name
 *@argc: count of argument in argv[]
 *@argv: array of strings
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
argc--;
printf("%s\n", argv[0]);
return (0);
}
