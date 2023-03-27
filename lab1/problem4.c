#include <stdio.h>

int main() {
    double arr1[3], arr2[3], arr3[6];
    int i;

    printf("-----------------------------------\n");
    printf("Enter the first array's values.\n");
    printf("-----------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("Enter a number: ");
        scanf("%lf", &arr1[i]);
    }

    printf("-----------------------------------\n");
    printf("Enter the second array's values\n");
    printf("-----------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("Enter a number: ");
        scanf("%lf", &arr2[i]);
    }

    for (i = 0; i < 3; i++) {
        arr3[i] = arr1[i];
        arr3[i + 3] = arr2[i];
    }

    printf("The merged array is [");
    for (i = 0; i < 6; i++) {
        printf("%.2f", arr3[i]);
        if (i != 5) {
            printf(", ");
        }
    }
    printf("].\n");

    return 0;
}
