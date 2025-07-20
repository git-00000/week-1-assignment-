//  Largest Element in Array

#include <stdio.h>

int main() {
    int arr[100], n, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];  

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element is %d\n", max);
    return 0;
}

#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int first = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findSecondLargest(arr, n);
    printf("Second Largest: %d\n", result);
    return 0;
}
