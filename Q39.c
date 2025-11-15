//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
int n, digit, product = 1;
int foundOdd = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0) {
digit = n % 10;      
if (digit % 2 == 1) { 
product *= digit;
foundOdd = 1;
}
n = n / 10;        
}
if (foundOdd)
printf("Product of odd digits = %d", product);
else
printf("No odd digits found.");
return 0;
}