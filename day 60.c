# Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output

#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    printf("Maximum elements in each window:\n");
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
