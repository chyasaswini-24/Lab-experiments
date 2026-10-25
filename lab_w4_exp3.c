#include <stdio.h>

int main()
 {
    int s1, s2, s3, s4, s5;
    int total_int;
    float total, average;

    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total_int = s1 + s2 + s3 + s4 + s5;
    total = (float)total_int;          
    average = total / 5.0;            

    printf("Total marks (float): %.2f\n", total);
    printf("Average marks (float): %.2f\n", average);
}