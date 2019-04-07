//Write a program to determine whether a person is eligible to vote
#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	print("Enter the age:\n");
	scanf("%d",&age);
	if(age>=18)
	printf("Person is eligible to vote");
	getch();
	return 0;
}
