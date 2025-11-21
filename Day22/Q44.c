//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
int n;
float sum = 0.0;
printf("Enter number of terms: ");
scanf("%d", &n);
sum = 1.0;
int numerator = 3;
int denominator = 4;
for (int i = 2; i <= n; i++) {
sum = sum + (float)numerator / denominator;
numerator += 2;     
denominator += 2;   
}
printf("Sum of the series = %.4f", sum);
return 0;
}