#include <stdio.h>

int main() {
    int n; // Number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d", a);
        c = a + b; // Calculate the next term
        a = b;            // Update 'a' to the current term
        b = c;     // Update 'b' to the next term
    }

}
