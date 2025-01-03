#include <stdio.h>
int sum(int a, int b);
int printTable(int n);

int sum(int a, int b)
{
    printf("the sum of this two number is: %d\n", a + b);
}
int printTable(int n){ // parameter or formal parameter
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}
int main()
{
    // int a, b;
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    // printf("Enter second number: ");
    // scanf("%d", &b);
    // sum(a, b); // function call with arguments a and b
    printTable(n); // argument or actual parameter 
    return 0;
}