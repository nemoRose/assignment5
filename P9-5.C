#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=4;i++)
	{

		for(j=0;j<i;j++)
		{
			printf("%d",i);
		}
		for(k=4;k<=1;k--)
		{
			printf(" ");
		}
		printf("\n");
	}
	getch();
}