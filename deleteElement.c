//delete an element from an array and making the following elements move to the left (last element = 0)
#include <stdio.h>

int main(void)
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

    int remove;
    printf("Which element in the array do u wanna remove?\n");
    scanf("%d", &remove);

    for(int j = 0; j < length; j++)
        {
            if (array[j] == remove)
            {
                array[j] = array[j + 1];
                remove = array[j + 1];
            }
        }

    array[length - 1] = 0;
    
    for(int l = 0; l < length; l++)
        {
            printf("%d", array[l]);
        }
    return 0;
}