//Q62: Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    int num;
    printf("Enter the number of elements in your array: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter the elements of your array:\n");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);  // Fix: use i instead of arr[num]
    }
    printf("Your original array is:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    // Reverse the array in-place
    for (int i = 0; i < num / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }
    printf("\nYour reversed array is:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}