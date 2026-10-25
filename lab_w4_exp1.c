#include <stdio.h>

int main()
 {
    double A, B, C, D, E, F, G;
    
    printf("=== Expressions (a) and (b) ===\n");
    printf("Enter values for A, B, C, D, E, F, G :\n");
    
    if (scanf("%lf %lf %lf %lf %lf %lf %lf", &A, &B, &C, &D, &E, &F, &G) != 7) {
        printf("Invalid input.\n");
        return 1;
    }
    double result_a = A + B * C + (D * E) + F * G;
    printf("a. Result of A + B * C + (D * E) + F * G = %.2f\n\n", result_a);

    double result_b = A / B * C - B + A * D / 3.0;
    printf("b. Result of A / B * C - B + A * D / 3 = %.2f\n\n", result_b);

    int A_c, B_c;

    printf("=== Expression (c) ===\n");
    printf("Enter integer values for A and B (separated by space):\n");
    if (scanf("%d %d", &A_c, &B_c) != 2) {
        printf("Invalid input.\n");
    }
    int result_c = A_c++ + B_c-- - A_c;
    printf("c. Result of A +++ B --- A = %d\n", result_c);
    printf("   [Final states -> A updated to: %d, B updated to: %d]\n\n", A_c, B_c);

    int i;

    printf("=== Expression (d) ===\n");
    printf("Enter an integer value for i:\n");
    if (scanf("%d", &i) != 1) {
        printf("Invalid input.\n");
    }
    int J = (i++) + (++i);
    printf("d. Result of J = (i++) + (++i) = %d\n", J);
    printf("   [Final state -> i updated to: %d]\n", i);
}