//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
char operator;
int num1, num2;
printf("Enter an operator (+, -, *, /, %%): ");
scanf(" %c", &operator); 
printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
switch (operator) {
case '+':
printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
break;
case '-':
printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
break;
case '*':
printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
break;
case '/':
if (num2 != 0)
printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
else
printf("Error: Division by zero is not allowed.\n");
break;
case '%':
if (num2 != 0)
printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
else
printf("Error: Modulus by zero is not allowed.\n");
break;
default:
printf("Invalid operator! Please use +, -, *, /, or %%.\n");
}
return 0;
}