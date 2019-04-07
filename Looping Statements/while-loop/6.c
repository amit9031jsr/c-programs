//program to convert a binary number to a decimal number
#include<stdio.h>
main()
{
	int n,nsave,rem,d,j=1,dec=0;
	printf("Enter the number in binary:");
	scanf("%d",&n);
	nsave=n;
	while(n>0)
	{
		rem=n%10;//taking last digit
		printf("%d\n",rem);
		d=rem*j;
		printf("%d\n",d);
		dec=dec+d;
		printf("%d\n",dec);
		j=j*2;
		printf("%d\n",j);
		n=n/10;//skipping last digit
		printf("%d\n",n);
	}
	printf("Binary number=%d, Decimal number=%d\n",nsave,dec);
}
