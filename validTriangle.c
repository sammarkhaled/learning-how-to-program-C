//valid triangle?
#include <stdio.h>

int validTriangle(float a, float b, float c);

int main(void)
{
    return (validTriangle(400, 2, 3));
}

int validTriangle(float a, float b, float c)
{
    if (a + b < c || a + c < b || c + b < a)
    {
        printf("no");
    }
    
    else
    {
        printf("yes");
    }
    
    return 0;
}