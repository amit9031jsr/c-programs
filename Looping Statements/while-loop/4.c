//program to find the product of digits of any number
#include<stdio.h>
main()
{
	int n,prod=1,rem;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		prod=prod*rem;
		n=n/10;
	}
	printf("Product of digits = %d\n",prod);
}
