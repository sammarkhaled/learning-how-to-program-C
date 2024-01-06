//prompt the user for an array size n, every element (starting from 1) doubles in size
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Please choose a size for the array: ");
        scanf("%d", &n);
    }while(n < 1);

    int array[n];
    array[0] = 1;
    
    for(int i = 0; i < n; i++)
    {
        array[i+1] = array[i] * 2;
        printf("%d ", array[i]);
    }
    return 0;
}