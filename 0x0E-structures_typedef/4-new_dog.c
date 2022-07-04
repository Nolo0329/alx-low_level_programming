#include "dog.h"


/**
*_strlen - returns length of
*a string
*@str: string to be counted
*Return: returns length of string
*/
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}


/**
*_strcopy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}




/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *bobby;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

bobby = malloc(sizeof(dog_t));
if (bobby == NULL)
return (NULL);

bobby->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (bobby->name == NULL)
{
free(bobby);
return (NULL);
}

bobby->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (bobby->owner == NULL)
{
free(bobby->name);
free(bobby);
return (NULL);
}

bobby->name = _strcopy(bobby->name, name);
bobby->age = age;
bobby->owner = _strcopy(bobby->owner, owner);

return (bobby);
}
