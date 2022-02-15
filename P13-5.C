#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,ip,n,op=0;
	clrscr();
	printf("\n Enter the number of elements you want in the array : \n");
	scanf("%d",&n);
	printf("\nEnter the values : \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the element from array that you need frequency of  : \n");
	scanf("%d",&ip);
	for(i=1;i<=n;i++)
	{
		if(ip==a[i])
		{
			op=op+1;
		}
	}
	printf("\nThe Frequency of %d is %d",ip,op);
	getch();
}