#ifndef DOG_H
#define DOG_H
/**
 * struct dog - elements of the dog
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - new type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *t, char *name, float age, char *owner);
void print_dog(struct dog *t);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *t);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
#endif
