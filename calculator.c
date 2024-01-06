//simple calculator
//option to determine the zero points of a square function
#include <stdio.h>
#include <math.h>

float addition(int x, float y)
{
    return x + y;
}

float subtraction(int x, float y)
{
    return x - y;
}

float multiplication(int x, float y)
{
    return x * y;
}

float division(int x, float y)
{
    return x / y;
}

float pqFormelplus (float vorfaktor, float p, float q)
{
    float vorfaktor1 = vorfaktor / vorfaktor;
    p = p / vorfaktor;
    q = q / vorfaktor;

    return (-p / 2) + sqrt((p / 2) * (p / 2) - q);
}

float pqFormelminus (float vorfaktor, float p, float q)
{
    float vorfaktor1 = vorfaktor / vorfaktor;
    p = p / vorfaktor;
    q = q / vorfaktor;
    return (-p / 2) - sqrt((p / 2) * (p / 2) - q);
}

int main (void)
{
    int start = 0;
    do
    {
        int choice;
        int a;
        float b;
        int operation;
        float result1;
        float result2;
        float vorfaktor;
        float p;
        float q;

        printf("(1- operation) (2- 2nd degree polynom): ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("Type in your first number: ");
            scanf("%d", &a);

            printf("Type in your second number: ");
            scanf("%f", &b);

            do
            {
                printf("Please select an operation: (1-addition) (2-substraction) (3-multiplication) (4-division): ");
                scanf("%d", &operation);
            }while (operation < 1 || operation > 4);

            if (operation == 1)
            {
                result1 = addition(a, b);
            } 

            else if (operation == 2)
            {
                result1 = subtraction(a, b);
            } 

            else if (operation == 3)
            {
                result1 = multiplication(a, b);
            } 

            else
            {
                result1 = division(a, b);
            }
            printf("The result is %.2f\n", result1); 
        }
        
        else
        {
            printf("Does your polynom have a num before the x^2?\nIf yes type it in, if no, type 1: ");
            scanf("%f", &vorfaktor);

            printf("Type in the value before the x: ");
            scanf("%f", &p);

            printf("Now type in the last value without a variable.\nIf there is no value, type 0: ");
            scanf("%f", &q);

            printf("Your function is %.2f x^2 + %.2f x + %.2f \n", vorfaktor, p, q);
            if((((p / 2) * (p / 2) - q) > 0))
            {
                result1 = pqFormelplus(vorfaktor, p, q);
                result2 = pqFormelminus(vorfaktor, p, q);
                if(result1 == result2)
                {
                    printf("The function only has one zero point\nx = %f", result1);
                }

                else
                {
                    printf("x1 = %.2f x2 = %.2f\n", result1, result2);
                }
            }
            else
            {
                printf("The function does not have any zero points\n");
            }
        }

        printf("Do you want to perform another operation? |0 - restart| |1 - exit|\n");
        scanf("%d", &start);

    }while(start == 0);
    return 0;
}