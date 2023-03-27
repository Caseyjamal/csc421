#include <stdio.h>

#include <stdio.h>

void counting_sort(int arr[], int n) {
    int count[100] = {0}, output[n], i;
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (i = 1; i < 100; i++) {
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int n, arr[100], i;
    printf("How many values to sort (<100)? ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter the number:");
        scanf("%d", &arr[i]);
    }
    counting_sort(arr, n);
    printf("The sorted numbers are:");
    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}
