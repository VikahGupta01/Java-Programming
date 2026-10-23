//write in c to calcullate the sum of element in 1d array
#include<stdio.h>
int main(){
    int arr[5], i;
    int sum =0;
    printf("enter 5 element:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of element =%d", sum);
    return 0;
}

    