//ask user for a positive integer n, add every number from 0 to n, return the sum and whether its even or uneven
#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    int result = 0;

    do
    {
    printf("Choose your n: ");
    scanf("%d", &n);
    }while(n < 1);

    while (i < (n + 1))
    {
        result = result + i;
        i++;
    }

    if (result % 2 == 0)
    {
        printf("The sum is %d and is an even number.", result);
    }

    else
    {
        printf("The sum is %d and is an uneven number", result);
    }

    return 0;

}