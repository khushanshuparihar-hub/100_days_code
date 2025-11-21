//Q70: Rotate an array to the right by k positions.
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    int n, k;
    printf("How many elements are in your array? ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter your %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("How many positions do you want to rotate to the right? ");
    scanf("%d", &k);

    k = k % n; // Normalize k if it's larger than n

    int rotated[n];

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Here is your rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}