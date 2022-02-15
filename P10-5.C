#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,s,e;
	clrscr();
	printf("\nEnter start value : \n");
	scanf("%d",&s);
	printf("\nEnter stop value : \n");
	scanf("%d",&e);
	for(i=s;i<e;i++)
	{
		sum=sum+i;
	}
	printf("\n Sum of %d to %d = %d",s,e,sum);
	getch();
}