#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1234;
	char str[]="Hello World";
	printf("This is %-8d",a);
	printf("\n %s",str);
	printf("\n %20s",str);
	printf("\n %20.10s",str);
	printf("\n %.7s",str);
	printf("\n %-10s",str);
	printf("\n %-20.10s",str);
	printf("\n %7s",str);
}
