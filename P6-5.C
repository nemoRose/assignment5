#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,rem,rev,sum=0;
	clrscr();
	printf("\n Enter the number : ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rev=temp%10;
		sum=(sum*10)+rev;
		temp=temp/10;
	}
	if(n==sum)
	{
		printf("\n Number is palindrome");
	}
	else
	{
		printf("\n Number is not palindrome");
	}
	getch();
}