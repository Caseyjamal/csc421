#include <stdio.h>

int main() {
    double arr[3];
    double sum = 0.0;

    for (int i = 0; i < 3; i++) {
        printf("Enter a number: ");
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    printf("The array is [");
    for (int i = 0; i < 3; i++) {
        printf("%.2f", arr[i]);
        if (i != 2) {
            printf(", ");
        }
    }
    printf("].\n");

    double average = sum / 3.0;
    printf("The average of the array is %.2f.\n", average);

    return 0;
}