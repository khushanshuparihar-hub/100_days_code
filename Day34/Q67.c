//Q67: Insert an element in an array at a given position.
/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int n, pos, val;
    printf("How many elements are in your array? ");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Enter your %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Where do you want to insert the new element? (0 for first position): ");
    scanf("%d", &pos);

    printf("What number do you want to insert? ");
    scanf("%d", &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    printf("Here is your updated array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}