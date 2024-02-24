#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array = malloc(sizeof(int)*10);
    for (int i = 0; i < 10; i++)
    {
        array[i] = 10 - i;
        printf("a[%d] = %d\n", i, array[i]);
    }
    free(array);
    return 0;
}