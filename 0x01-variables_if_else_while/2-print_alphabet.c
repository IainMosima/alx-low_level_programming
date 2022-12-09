#include <stdio.h>
/** 
 * main - returns alphabets
 * Return: 0 if success
*/
int main(void)
{
    int ch ='a';
    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }
    putchar('\n');
    return(0);
}