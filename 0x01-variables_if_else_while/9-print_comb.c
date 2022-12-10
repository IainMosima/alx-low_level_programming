#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: returns 0 if successful
*/
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(',');
putchar(' ');
num++;
}
putchar('\n');
return (0);
}
