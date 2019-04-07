//multiply two positive numbers without using * operator
#include<stdio.h>
main()
{
	int a,b,i;
	int result=0;
	printf("enter two numbers to be multiplied:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
		result=result+a;
	printf("%d * %d = %d\n",a,b,result);
}
