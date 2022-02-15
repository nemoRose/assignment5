#include<stdio.h>
#include<conio.h>
void main()
{
	int n,arr[10],i,sum=0;
	clrscr();
	printf("Enter the range to be entered : \n");
	scanf("%d",&n);
	printf("\n Enter values: \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("\n Sum = %d",sum);
	getch();
}