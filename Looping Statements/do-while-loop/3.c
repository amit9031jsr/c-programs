#include<stdio.h>
main()
{
	int num,sum=0;
	do
	{
		printf("enter a (0 to stop):");
		scanf("%d",&num);
		sum=sum+num;
	}while(num!=0);
	printf("Sum is %d\n",sum);
	
}
