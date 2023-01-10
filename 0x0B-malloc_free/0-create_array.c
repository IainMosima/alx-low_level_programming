#include "main.h"
#include "stdlib.h"
/**
 * create_array - creates an array of chats
 * @size: size of memory to print
 * @c: character to print
*/
char *create_array(unsigned int size, char *c)
{
char *array;
unsigned int i;
i = 0;
if (size == 0)
{
return ('\0');
}
else
{
array = malloc(sizeof(char) * size);
if (array == '\0')
{
return ('\0');
}
else
{
while (i < size)
{
array[i] = c;
i++;
}
}
return (array);
}
}
