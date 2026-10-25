#include <stdio.h>

int main()
 {
    float principal, rate, time, simple_interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("\n--- Results ---\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time Period     : %.2f years\n", time);
    printf("Simple Interest : %.2f\n", simple_interest);
}