#include "main.h"
/**
 * _strdup - Entry point
 * @str: string needed to duplicate
 * Return: a pointer to the duplicated string or null
*/
char *_strdup(char *str)
{
char *newstr = NULL;
unsigned int i;
int n;

if (str == NULL)
return (NULL);
for (n = 0; str[n] != '\0'; n++)
;
newstr = (char *)malloc(n + 1 * sizeof(char));
if (newstr != NULL)
{
for (i = 0; str[i] != '\0'; i++)
newstr[i] = str[i];
}
else
{
return (NULL);
}
newstr[i] = '\0';
return (newstr);
}
