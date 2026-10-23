//  write a program in c create and 2d array

#include <stdio.h>

int main() {
    int a[3][3];
    int i, j;

    printf("Enter 9 elements:\n");

    // Input elements
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n2D Array Elements:\n");

    // Display elements
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}