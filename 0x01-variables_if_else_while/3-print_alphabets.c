#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then followed i uppercase
 * Return: 0 if successful
 */
int main(void)
{
for (int ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (int ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
return (0);
}
