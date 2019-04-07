#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	a=a+b;//59=23+36
	b=a-b;//23=59-36
	a=a-b;//36=59-23
	printf("\na = %d\nb = %d",a,b);
	return 0;
}
