#include <stdio.h>

int main(void)
{
int x = 4;
int * ptr = &x;
printf("%d\n", ptr);
printf("%d\n", *ptr);

int a[] = {1, 2, 3, 4, 5};
int len = sizeof(a)/sizeof(a[0]);
int * ptr2 = &a[len/2];
printf("%d\n", *ptr2);

*(a+2) = 6;
printf("%d\n", a[2]);

int y = 6;
int z = 10;
int * p, *q;
p = &y;
q = &z;
*p = *q;
printf("%d, %d\n", y, z);


int * pointer, * pointer1;
int array[] = {1, 2, 3, 4, 5, 6};
pointer = &array[1];
pointer1 = &array[4];

pointer = pointer + 4;
printf("%d", pointer>pointer1);
int b = 5;

printf("%d", ((1 + b++) / 2));
}