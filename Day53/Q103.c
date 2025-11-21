//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int findPivotIndex(int nums[], int size) {
    int totalSum = 0, leftSum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }
    // Iterate to find the pivot index
    for (int i = 0; i < size; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}
int main() {
    // Example input
    int nums[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);

    int pivotIndex = findPivotIndex(nums, size);
    printf("%d\n", pivotIndex);
    return 0;
}