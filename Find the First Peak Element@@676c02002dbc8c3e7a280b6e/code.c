#include <stdio.h>

int findPeak(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Check if the current element is a peak
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            return arr[i]; // Return the peak element
        }
    }
    return -1; // If no peak is found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findPeak(arr, n);
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("-1");
    }

    return 0;
}
