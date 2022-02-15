#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,i;
	clrscr();
	printf("\nEnter the number upto where you need the leap year : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%4==0 || i%400==0)
		{
			printf("\n%d",i);
		}
	}
	getch();
}