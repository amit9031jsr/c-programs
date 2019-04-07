//program to count the digits in any number
#include<stdio.h>
main()
{
	int n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	do
	{
		n=n/10;
		count++;
	}while(n>0);
	printf("Number of digits=%d\n",count);
}
