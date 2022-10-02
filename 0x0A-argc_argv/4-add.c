#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds all arguments together if they are digits
 *@argc: argument count only accepts ints separated by spaces
 *@argv: argument vector
 *Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
int s, i, j;
s = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
}
 if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[i]);
}
printf("%d\n", s);
return (0);
}
