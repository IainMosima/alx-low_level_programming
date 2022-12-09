#include <stdio.h>
/** 
 * main - prints alphabets in lowercase in reverse
 * Return: 0 if successful
*/
int main(void)
{
int ch = 'z';
while(ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}