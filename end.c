#include <stdio.h>
int main() {
    int n, i, newElement;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new element to insert at the end: ");
    scanf("%d", &newElement);
    arr[n] = newElement;
    n++; 
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
