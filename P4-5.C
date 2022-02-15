#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,fact=1;
	clrscr();
	printf("\n Enter the number for taking : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n Factorial of %d = %d",n,fact);
	getch();
}