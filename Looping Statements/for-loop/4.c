#include<stdio.h>
main()
{
	int i,n,sum=0,term=1;
	printf("enter the terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+term;
		printf("%d=%d+%d\n",sum,sum,term);
		term=term+i;
		printf("%d=%d+%d\n",term,term,i);
	}
	printf("The sum of series upto %d terms is %d\n",n,sum);
}
