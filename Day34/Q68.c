//Q68: Delete an element from an array.
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() {
    int n, pos;

    printf("How many elements are in your array? ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Which position do you want to delete? (0 for first element): ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position. No changes made.\n");
        return 1;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Here is your updated array:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}