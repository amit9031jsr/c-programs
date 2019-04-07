//program to find the factorial of any number
#include<stdio.h>
main()
{
	int n,num;
	long fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	num=n;
	if(n<0)
	{
		printf("no factorial of negative numbers");
	}
	else
	{
		while(n>1)
		{
			fact=fact*n;
			n--;
		}
		printf("Factorial of %d = %ld\n",num,fact);
	}
}
