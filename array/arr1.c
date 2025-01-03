#include <stdio.h>
int main()
{
    int marks[3];

    printf("enter phy mrks: ");
    scanf("%d", &marks[0]);

    printf("enter chem mrks: ");
    scanf("%d", &marks[1]);

    printf("enter math mrks: ");
    scanf("%d", &marks[2]);



    printf("phy = %d , chem = %d , math = %d\n", marks[0], marks[1], marks[2]);

    return 0;
}