//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
int n, i, odd = 1, sum = 0;  
printf("Enter the number of odd numbers to sum: ");
scanf("%d", &n);
if (n < 1) {
printf("Please enter a number greater than 0.\n");
return 1;
}
for (i = 1; i <= n; i++) {
sum += odd;
odd += 2; 
}
printf("Sum of first %d odd numbers = %d\n", n, sum);
return 0;
}