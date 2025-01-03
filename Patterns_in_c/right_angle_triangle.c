#include <stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows); // Read the number of rows

    for (int i = 1; i <= rows; i++)
    { // Outer loop for rows
        for (int j = 1; j <= i; j++)
        { // Inner loop for stars
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
