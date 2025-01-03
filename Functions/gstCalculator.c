#include <stdio.h>
#include <stdbool.h>

float gstPrice(float p); // Function prototype with float return type

float gstPrice(float p)
{
    float gst = p * 0.18;
    float totalPrice = p + gst;
    printf("The price of the product with GST is: %.2f\n", totalPrice);
    return totalPrice; // Return the total price
}

int main()
{
    float price; // Changed to float
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%99s", name); // Prevents buffer overflow

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s! You are %d years old.\n", name, age);

    if (age > 0 && age < 100)
    { // Check if the age is valid
        printf("Welcome to the GST calculator (created by Jit)\n");
        printf("Enter the raw price: ");
        scanf("%f", &price); // Accept float input for price

        gstPrice(price); // Call the function
    }
    else
    {
        printf("Invalid age entered.\n");
    }
    return 0;
}
