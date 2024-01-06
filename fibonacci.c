//ask the user for an index and return the corresponding fibonacci number
#include <stdio.h>

int fibonacci(int x);

int main(void)
{
    int index;

    printf("Please enter an index for the fibonacci algorithm:\n");
    scanf("%d", &index);

    int num = fibonacci(index);
    printf("Your fibonacci number is %d", num);
}

int fibonacci(int x)
{
    int fibNum = 0;
    int fibAdd = 1;
    int fibStore = 1;
    
    if (x == 1)
    {
        return 1;
    }
    
    for(int i = 1; i < x; i++)
    {
       fibNum += fibStore;
       fibStore = fibAdd;
       fibAdd = fibNum;
    }
    return fibNum;
    return 0;
}