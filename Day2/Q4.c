//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
float radius,area,circumference;
printf("Enter radius :");
scanf("%f",&radius);
area=3.142*radius*radius;
circumference=2*3.142*radius;
printf("Area is %f",area);
printf("\nCircumference is %f",circumference);
}