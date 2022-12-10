#include <stdio.h>
/** 
 * main - prints all possible combinations of two digits
 * Return: 0 if successful
*/
int main(void)
{
for(int tens = '0'; tens <= '9'; tens++)
{
for(int ones = '1'; ones <= '9'; ones++)
{
if (!(tens == ones || ones == tens) && (tens <= '8' && ones <= '9')) /*Remove repetition if both ones and tens are equal*/
{
putchar(tens);
putchar(ones);
putchar(',');
putchar(' ');
}
}
}
return (0);
}