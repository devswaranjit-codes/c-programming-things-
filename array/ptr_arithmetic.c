#include <stdio.h>
int main() {
    // int age = 22;
    // int *ptr = &age;
    
    // case 2
    // float price = 100.00;
    // float *ptr = &price;

    // case 3
    char star = '*';
    char *ptr = &star;

    printf(" using pointer: %u\n", ptr);   

    ptr++;

    printf(" after incrementing pointer: %u\n", ptr);

    ptr--;

    printf(" after decrementing pointer: %u\n", ptr);

return 0;

}