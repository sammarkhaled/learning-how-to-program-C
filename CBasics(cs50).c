#include <stdio.h>
#include <cs50.h>

/*
//print "hello, world"
int main(void)
{
    printf("hello, world\n");
    return 0;
}


//print "Hey Girl<3" 10 times
int main(void)
{
    int i = 10;
    while (i > 0)
    {
        printf("Hey Girl<3\n");
        i--;
    }
    return 0;
}


// Compare both variables
int main(void)
{
    int x = 10;
    int y = 100;

    if (x > y)
    {
        printf("x, which is %d is bigger than y, which is %d!\n", x, y);
    }

    else if (x < y)
    {
        printf("y, which is %d is bigger than x, which is %d!\n", y, x);
    }

    else
    {
        printf("both variables are %d and therefore the same!\n", x);
    }
    return 0;
}


//4 mario ?-blocks
int main(void)
{
    printf("????\n");
    return 0;
}


//same thing with a loop
int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }

    printf("\n");
    return 0;
}


//3 vertical blocks on top of each other
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
    return 0;
}


//3 by 3 wall of blocks
int main(void)
{
    const int n = 10;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }

        printf("\n");
    }
    return 0;
}


//calculator
int main(void)
{
    long x = 1000;
    long y = 17;

    float z = (float) x / (float) y;

    printf("%f\n", z);
    return 0;
}


//get contact info and print a confirmation
int main(void)
{
   string name = get_string("name: ");
   int age = get_int("age: ");
   string number = get_string("number: ");

   printf("Your name is %s, your age is %i and your number is %s.\n", name, age, number);
   return 0;
}


//llama population, n amount of llamas, every year n/3 +llamas n/4 -llamas
//ask user for llama population and for goal number of llamas, need at least 9 llamas to grow
//print years until goal is reached
int main(void)
{
    printf("Welcome to the Llama Generator!\n");
    printf("This program will tell u, how many years it will take to reach a goal number of llamas.\n");
    printf("In order to ensure growing, u need a starting size of at least 9 llamas!\n");

    int start;
    int goal;

    do
    {
        start = get_int("enter a valid llama population: ");
    }while (start < 9);

    printf("U chose a start population of %d llamas!\n", start);
    printf("Now ");

    do
    {
        goal = get_int("enter a valid goal population: ");
    }while (goal < start);

    float count = start;
    int years = 0;

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


//arrays in c
int main(void)
{
    int scores[3];

    scores[0] = 1;
    scores[1] = 2;
    scores[2] = 3;

    printf("%d", scores[1]);
    return 0;
}

//prints the average of the 3 elements
float average(int array[], int length);

int main(void)
{
    int length;

    printf("Please enter the amount of scores u wanna calculate the average of:\n");
    scanf("%d", &length);

    int scores[length];
    printf("The average is %f\n", average(scores, length));
    return 0;
}

float average(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        printf("Please enter your score:\n");

        printf("Score: ");
        scanf("%d", &array[i]);
        sum += array[i];
    }
    return sum / (float) length;
}


//strings in c (strings are also arrays of chars)
int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3);
    return 0;
}
*/