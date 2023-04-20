//Write a c program to calculate the perimeter and area of rectangle .
#include<stdio.h>
int main(void)
{
    float a,b,p,area;
    printf("\nEnter length and breadth of the Rectangle : ");
    scanf("%f%f",&a,&b);
    p=2*(a+b);
    printf("\nPerimeter of the Rectangle : %0.2f",p);    
    area = a*b;
    printf("\nArea of Rectangle: %.2f\n",area); 
    return 0;
}
