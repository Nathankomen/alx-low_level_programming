#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
int k;
k = 0;
while (s[k] != '\0')
{
k++;
}
return (k);
}
/**
 * *_strcpy - copy the string
 * @dest: pointer to destination
 * @src: string to be copied
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
int lenght, j;
lenght = 0;
while (src[lenght] != '\0')
{
lenght++;
}
for (j = 0; j < lenght; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog pointer (Success),NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int lenght1, lenght2;
lenght1 = _strlen(name);
lenght2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (lenght1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (lenght2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
