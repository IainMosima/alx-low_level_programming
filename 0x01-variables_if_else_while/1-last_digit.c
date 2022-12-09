#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int lastNum;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    printf("Last digit of %d is ", n);
    lastNum = n % 10;
    if(lastNum > 5)
    {
        printf("%d and is greater than 5");
    }
    else if(lastNum == 0)
    {
        printf("%d and is 0");
    }
    else if ((lastNum < 6) && (lastNum > 0))
    {
        printf("and is less than 6 and not 0");
    }
	return (0);
}