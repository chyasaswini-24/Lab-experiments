#include <stdio.h>
int main() {
    int choice;
    float fahrenheit, celsius;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
    } 
    else if (choice == 2) {
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    } 
    else {
        printf("\nInvalid choice! Please run the program again and select 1 or 2.\n");
    }
}