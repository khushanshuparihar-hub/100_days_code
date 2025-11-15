//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
int n, original, sum = 0, digit;
printf("Enter a number: ");
scanf("%d", &n);
original = n; 
while (n > 0) {
digit = n % 10;        
sum = sum + (digit * digit * digit); 
n = n / 10;            
}
if (sum == original)
printf("The number is an Armstrong number.");
else
printf("The number is not an Armstrong number.");
return 0;
}