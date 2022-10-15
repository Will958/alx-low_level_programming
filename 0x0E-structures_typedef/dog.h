#ifndef _DOG_
#define _DOG_
/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 *struct dog - has dog's name, age and owner
 *@name: dog's name
 *@age: dog's age
 *@owner: name of the owner
 *Description: struct called "dog" that stores its name,
 *its age and the name of the owner
 */
struct dog
{
char *name;
float *age;
char *owner;
}
;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
