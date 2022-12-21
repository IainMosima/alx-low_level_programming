#include "main.h"
/**
 * reverse_array - reverses the contenet of an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: void
*/
void reverse_array(int *a, int n)
{
int c2 = 0;
while (c2 < n)
{
int t1 = a[c2];
int t2 = a[n - 1];
a[c2] = t2;
a[n - 1];
c2++;
n--;
}
}
