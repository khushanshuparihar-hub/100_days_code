//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
int n, original, first, last, temp, power = 1;
printf("Enter a number: ");
scanf("%d", &n);
original = n;
last = n % 10;     
while (n >= 10) {
n = n / 10;
power = power * 10;
}
first = n;         
temp = original % power;  
temp = temp / 10;         
int swapped = last * power + temp * 10 + first;
printf("Number after swapping first and last digit = %d", swapped);
return 0;
}