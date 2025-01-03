#include<stdio.h>
int main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr =0 ;
    printf("Value of x is %d\n", x);
    printf("value of *ptr is %d\n", *ptr);

    *ptr += 5;
    printf("Value of x is %d\n", x);
    printf("value of *ptr is %d\n", *ptr);

    (*ptr)++;
    printf("Value of x is %d\n", x);
    printf("value of *ptr is %d\n", *ptr);
    return 0;
    
}