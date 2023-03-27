#include <stdio.h>
#include <stdlib.h>

int main() {
    int grades[2][5]; // declare the 2D array grades here
    float min, max;
    int j, i;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;
    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    for (i = 0; i < 2; i++) { // loop through each subject
        min = grades[i][0]; // initialize min to first grade
        max = grades[i][0]; // initialize max to first grade
        for (j = 1; j < 5; j++) { // loop through each grade in the subject
            if (grades[i][j] < min) { // compare current grade to min
                min = grades[i][j]; // update min if necessary
            }
            if (grades[i][j] > max) { // compare current grade to max
                max = grades[i][j]; // update max if necessary
            }
        }
        printf("The minimum grade in subject %d is: %.2f\n", i, min);
        printf("The maximum grade in subject %d is: %.2f\n", i, max);
    }

    return 0;
}
