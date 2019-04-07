//program to print the sum of digits of any number
#include<stdio.h>
main()
{
	int n,sum=0,rem;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		printf("%d\n",rem);
		//sum+=rem;
		sum=sum+rem;
		printf("%d\n",sum);
		//n/=10;
		n=n/10;
		printf("%d\n",n);
	}
	printf("Sum of digits = %d\n",sum);
}
