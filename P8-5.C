#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("\n Enter the value to check whether perfect number or no : \n");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
		     sum=sum+i;
		}
	}
	printf("\n sum of the divisor : %d",sum);
	if(sum==n)
	{
		printf("\n The number is a perfect number");
	}
	else
	{
		printf("\n The number is not a perfect number");
	}
	getch();
}