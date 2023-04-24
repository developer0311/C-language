//Given three points A(x_1,y_1),B(x_2,y_2),C(x_3,y_3) determine whether they are collinear ,i.e lie on the same line .
#include<stdio.h>
int main(void)
{
	float x_1,y_1,x_2,y_2,x_3,y_3,m_1,m_2;
	
	printf("\nEnter first point [x1,y1] : ");
	scanf("%f%f",&x_1,&y_1);
	
	printf("\nEnter second point [x2,y2] : ");
	scanf("%f%f",&x_2,&y_2);
	
	printf("\nEnter third point [x3,y3] : ");
	scanf("%f%f",&x_3,&y_3);
	
	m_1=(y_2-y_1)/(x_2-x_1);
	m_2=(y_3-y_2)/(x_3-x_2);
	
	if(m_1==m_2)
		printf("\nThree points lie on the same line .");
	else
		printf("\nThree points don't lie on the same line .");
	return 0;
}
