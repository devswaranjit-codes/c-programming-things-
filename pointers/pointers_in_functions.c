#include <stdio.h>

void square(int n);  // Function declaration (Call by Value)
void Squar(int *n);  // Function declaration (Call by Reference)

int main()
{
    int n = 10; // Declare variable n 

    // Call by Value
    square(n); 
    printf("Number after square (Call by Value): %d\n", n);

    // Call by Reference
    Squar(&n);
    printf("Number after square (Call by Reference): %d\n", n);

    return 0;
}

// Call by Value
void square(int n)
{
    int result = n * n;
    printf("The square of %d is %d\n", n, result);
}

// Call by Reference
void Squar(int *n)
{
    int res = (*n) * (*n);
    printf("The square of %d is %d\n", *n, res);
    *n = res; // Modify the value at the address
}
