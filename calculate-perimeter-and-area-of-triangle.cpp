//Write a c program to calculate the perimeter and area of triangle .
#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c,p,s,area;
    printf("\nEnter three sides of Triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    p=a+b+c;
    printf("\nPerimeter of the Triangle : %0.2f",p);
    s = p/2;    
    area = sqrt(s*(s-a)*(s-b)*(s-c));  
    printf("\nArea of triangle: %.2f\n",area); 
    return 0;
}
