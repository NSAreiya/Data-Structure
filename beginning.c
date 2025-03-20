#include <stdio.h>
int main() {
    int arr[100], n, i, newElement;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new element to add at the beginning: ");
    scanf("%d", &newElement);
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newElement;
    n++;
    printf("Array after adding the element at the beginning: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
