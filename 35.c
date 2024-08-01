#include <stdio.h>

int main() {
    int n, i,result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        while(arr!=0){
            arr[i]+arr[i-1];
        }
    }
    printf("The numbers are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        printf("%d\n", result);
    }
    printf("\n");
    return 0;
}
