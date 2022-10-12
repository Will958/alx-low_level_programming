#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: owner of the dog
 *Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int nlen, olen, i;
dog_t *bruno;
nlen = olen = 0;
while (name[nlen++])
;
while (owner[olen++])
;
bruno = malloc(sizeof(dog_t));
if (bruno == NULL)
return (NULL);
bruno->name = malloc(nlen * sizeof(bruno->name));
if (bruno == NULL)
return (NULL);
for (i = 0; i < olen; i++)
bruno->owner[i] = owner[i];
retuen (bruno);
}
