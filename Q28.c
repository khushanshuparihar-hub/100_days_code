//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
int n, i;
long long product = 1; 
int hasEven = 0;
printf("Enter the value of n: ");
scanf("%d", &n);
if (n < 2) {
printf("No even numbers in the range 1 to %d.\n", n);
return 0;
}
for (i = 2; i <= n; i += 2) {
product *= i;
hasEven = 1;
}
if (hasEven) {
printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
}
 return 0;
}