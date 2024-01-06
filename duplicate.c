//count duplicates of a number in an array
#include <stdio.h>

int main(void)
{
    int replay = 0;
    do
    {
        printf("How long should your array be?\n");
        int length;
        scanf("%d", &length);

        int array[length];
        printf("Please enter the values for your array:\n");

        for(int i = 0; i < length; i++)
        {
            printf("%d:\n", i);
            scanf("%d", &array[i]);
        }

        int number;
        int count = 0;

        printf("For which number do u wanna check?\n");
        scanf("%d", &number);

        for(int i = 0; i < length; i++)
        {
            if (array[i] == number)
            {
                count++;
            }
        }

        if (count > 1)
        {
            printf("The number %d exists %d times in the array.\n", number, count);
        }

        else if (count == 1)
        {
            printf("The number %d exists %d time in the array.\n", number, count);
        }

        else
        {
            printf("The number %d does not exist in the array.\n", number);
        }

        do
        {
            printf("Do you wanna start over? 1- yes 0- no\n");
            scanf("%d", &replay);
        }while(replay < 0 || replay > 1);

    }while(replay == 1);
    return 0;
}