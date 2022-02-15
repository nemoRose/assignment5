#include<stdio.h>
#include<conio.h>
void main()
{
	int i,odd[10],n;
	clrscr();
	printf("\nEnter the numbers : \n");
	scanf("%d",&n);
	printf("\n Enter values: \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&odd[i]);
	}
	printf("\n The odd numbers are : ");
	for(i=1;i<=n;i++)
	{
		if(odd[i]%2!=0)
		printf("\n%d",odd[i]);
	}
	getch();
}