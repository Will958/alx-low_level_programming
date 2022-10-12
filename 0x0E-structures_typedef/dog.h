#ifndef _DOG_
#define _DOG_
/**
 *struct dog - has dog's name, age and owner
 *@name: dog's name
 *@age: dog"s age
 *@owner: name of the owner
 */
typedef struct dog
{
char *name;
float *age;
char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
