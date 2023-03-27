#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50];
    int num;

    printf("Input an integer: ");
    scanf("%s", str);


    num = atoi(str);
    num += 5;
    printf("Output: %d\n", num);

    return 0;
}