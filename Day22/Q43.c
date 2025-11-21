//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
int n, original, digit;
int sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
original = n;
int fact;
while (n > 0) {
digit = n % 10;
fact = 1;
for (int i = 1; i <= digit; i++) {
fact *= i;   
}
sum += fact;
n /= 10;
}
if (sum == original)
printf("Strong number.");
else
printf("Not a strong number.");
return 0;
}