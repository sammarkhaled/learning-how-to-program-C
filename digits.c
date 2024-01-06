//give the amount of digits in an integer
#include <stdio.h>

int dig(int num)
{
    int count = 0;

    if (num < 10)
    {
        count = 1;
        return count;
    }

    else
    {
        while (num > 0)
        {
            int lastdig = num % 10;
            num = (num - lastdig) / 10;
            count ++;
        }
        return count;
    }
}


int main(void)
{
    int start = 0;
    int number;
    int digits;
    do
    {
        do
        {
            printf("Which positive number do u wanna check for its digits? ");
            scanf("%d", &number);
        }while(number < 0);

        digits = dig(number);
        if(digits == 1)
        {
            printf("You number has 1 digit.\n");
        }
        else
        {
            printf("You number has %d digits.\n", digits);
        }

        printf("Do you want to restart the program? [0 - restart] [1 - exit]\n");
        scanf("%d", &start);

    }while (start == 0);
    return 0;
}