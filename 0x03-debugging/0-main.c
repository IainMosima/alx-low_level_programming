#include "main.h"

/**
 * positive_or_negative - print if a number is positive or negative
*/
int main(int i)
{
int num;
srand(time(0));
num = rand() - RAND_MAX /2;
if (num > 0)
{
printf("%d is positive\n", num);
}
else if (num < 0)
{
printf("%d is negative", num);
}
else if (num == 0)
{
printf("%d is not zero\n", num);
}
}