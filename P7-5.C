#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0,avg=0,num[10];
	clrscr();
	printf("\n enter the range : \n");
	scanf("%d",&n);
	printf("\nenter values : \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	avg=sum/n;
	printf("\n The sum and average are : \n Sum = %d \n Average = %d",sum,avg);
	getch();
}