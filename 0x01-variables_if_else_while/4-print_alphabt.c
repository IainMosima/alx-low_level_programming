#include <stdio.h>
/**
 * main - prints the alphabet in lowercase followed by a new line
 * Return: Always 0 is successful
*/
int main(void)
{
    char ch = 'a';
    while(ch < 'z')
    {
        if ((ch != 'q') && (ch != 'e'))
        {
            putchar(ch);
        }
        ch++;
    }
    putchar('/n');
    return (0);
}
