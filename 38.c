#include <stdio.h>
int main() {
    int n, i, item, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the item to count: ");
    scanf("%d", &item);
    for (i = 0; i < n; i++) {
        if (arr[i] == item) {
            count++;
        }
    }
    printf("The item %d occurs %d times in the array.\n", item, count);
    return 0;
}
