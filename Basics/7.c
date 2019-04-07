#include<stdio.h>
#include<conio.h>
int main()
{
	float r,pi=3.14,area,circum;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	area=pi*r*r;
	circum=2*pi*r;
	printf("\nArea %.2f",area);
	printf("\nCircumference %.2f",circum);
	return 0;
}
