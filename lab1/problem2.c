#include <stdio.h>

int main() {
    double arr[5] = {5.0, 8.0, 10.0, 13.0, 19.0};
    double sum = 0.0;

    printf("The array is [");
    for (int i = 0; i < 5; i++) {
        printf("%.2f", arr[i]);
        if (i != 4) {
            printf(", ");
        }
        sum += arr[i];
    }
    printf("].\n");

    printf("The sum of the array is %.2f.\n", sum);

    return 0;
}