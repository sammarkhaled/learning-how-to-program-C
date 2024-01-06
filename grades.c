//ask the user for a custom number of grades (1 being the best and 6 being the worst) as floats and calculate the average grade
#include <stdio.h>

int main(void)
{
    printf("Of how many grades do you want the average?");
    int n;
    scanf("%d", &n);

    float grades[n];
    float average = 0;

    for(int i = 0; i < n; i++)
    {
        printf("Type in your %d. grade: ", (i + 1));
        scanf("%f", &grades[i]);
        average = average + grades[i];
    }
    average = average / n;
    printf("The average of your grades equals %.2f", average);
}