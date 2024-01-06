/*Llama population
n amount of llamas, every year n/3 +llamas n/4 -llamas
ask user for llama population and for goal number of llamas (need at least 9 llamas as a starting population to grow)
print years until goal is reached*/
#include <stdio.h>

int main(void)
{
    int start, goal;
    int years = 0;
    printf("Welcome to the Llama Generator!\n");
    printf("This program will tell u, how many years it will take to reach a goal number of llamas.\n");
    printf("In order to ensure growing, u need a starting size of at least 9 llamas!\n");

    do
    {
        printf("enter a valid llama population:\n");
        scanf("%d", &start);
    }while (start < 9);

    printf("U chose a start population of %d llamas!\n", start);
    printf("Now ");

    do
    {
        printf("enter a valid goal population: ");
        scanf("%d", &goal);
    }while (goal < start);

    float count = start;
    while (count < goal)
    {
        count = count + count / 3 - count / 4;
        years++;
    }

    if (years == 1)
    {
        printf("You need %i year to reach the llama population of %i.", years, goal);
    }
    else
    {
        printf("You need %i years to reach the llama population of %i.", years, goal);
    }
    
    return 0;
}