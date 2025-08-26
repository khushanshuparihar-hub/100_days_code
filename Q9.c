//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main() {
float principal, rate, time;
float simpleInterest, compoundInterest;
float amount;
int i;
printf("Enter Principal amount: ");
scanf("%f", &principal);
printf("Enter Annual Interest Rate (in %%): ");
scanf("%f", &rate);
printf("Enter Time (in years): ");
scanf("%f", &time);
simpleInterest = (principal * rate * time) / 100;
amount = principal;
for(i = 0; i < (int)time; i++) {
amount = amount + (amount * rate / 100);
}
compoundInterest = amount - principal;
printf("\nSimple Interest = %.2f\n", simpleInterest);
printf("Compound Interest = %.2f\n", compoundInterest);
return 0;
}