#include <stdio.h>

int main() {
    float speed, time, distance;
    printf("Enter the speed of the object \n(in m/s or km/h): ");
    scanf("%f", &speed);
    printf("Enter the time travelled \n (in seconds or hours): ");
    scanf("%f", &time);

    distance = speed * time;

    printf("\nThe distance travelled by the object is: %.2f units\n", distance);
}