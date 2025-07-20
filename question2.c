//  LARGEST ELEMENT IN ARRAY

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
