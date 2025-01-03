#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x,y;

   printf("enter the first value:");
   scanf("%d",&x);
   printf("enter the second value:");
   scanf("%d",&y);
   _swap(&x,&y); // function call with arguments a and b
   printf("x=%d & y=%d\n",x,y);
    return 0;
}
// Call by Value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping, a = %d and b = %d\n", a, b);
}

// Call by Reference
void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping, *a = %d and *b = %d\n", *a, *b);
}
