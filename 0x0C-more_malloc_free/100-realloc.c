#include "main.h"
/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory
* @old_size:is the size in bytes of the allocated space
* @new_size: the new size in bytes of the new memory block
* Return: pointer allocated new size memory or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *d;
unsigned int j, m = new_size;
char *oldd = ptr;
if (ptr == NULL)
{
d = malloc(new_size);
return (d);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
d = malloc(new_size);
if (d == NULL)
return (NULL);
if (new_size > old_size)
m = old_size;
for (j = 0; j < m; j++)
d[j] = oldd[j];
free(ptr);
return (d);
}
