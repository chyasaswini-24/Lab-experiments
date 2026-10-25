//calculating area of triangle using herons formula 
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    printf("Enter the lengths of the three sides: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is: %.2lf\n", area);
    }
     else 
        printf("Error: The entered sides do not form a valid triangle.\n");
}