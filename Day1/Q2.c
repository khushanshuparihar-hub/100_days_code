//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
int a,b,sum,difference,product,quotient;
printf("Enter two numbers :");
scanf("%d %d",&a,&b);
sum=a+b;
difference=a-b;
product=a*b;
printf("sum is %d",sum);
printf("\ndifference is %d",difference);
printf("\nproduct is %d",product);
if(b != 0){
quotient=a/b;
printf("\nquotient is %d",quotient);
}
else{
printf("\ndivision by zero is not possible ");
}
}