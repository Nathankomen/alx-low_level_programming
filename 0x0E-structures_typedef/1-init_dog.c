#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize type struct dog variable
 * @t: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *t, char *name, float age, char *owner)
{
if (t == NULL)
t = malloc(sizeof(struct dog));
t->name = name;
t->age = age;
t->owner = owner;
}
