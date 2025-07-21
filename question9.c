#include <stdio.h>
void frequencyCount(int arr[], int n) {
    int freq[n];  


    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) {
            freq[arr[i] - 1]++;
        }
    }


    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");
}


int main() {
    int arr1[] = {2, 3, 2, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    frequencyCount(arr1, n1);  
}