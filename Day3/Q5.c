//Q5: Write a program to convert temperature from celsius fahrenheit.
#include<stdio.h>
int main(){
float c;
int a;
printf("enter your temperature in celcius");
scanf("%d", &a);
c =  (a*9/5)+32;
printf( "your temperature in farenhite is %f\n", c);
return 0;
}