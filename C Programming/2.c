//write in c to find out  minimum element from an  array.
#include <stdio.h>

int main() {
    int arr[5], i, min;

    printf("Enter 5 elements:\n");

    // Input
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    
    for(i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Output
    printf("Minimum element = %d", min);

    return 0;
}