#include<stdio.h>
#include<conio.h>
void main()
{
	int row, col,n,k=1;
	clrscr();
	printf("\n Enter number of rows you want : \n");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		if(row%2==0)
		{

			for(col=1;col<=row;col++)
			{
				if(col%2==0)
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}
			printf("\n");
		}
		if(row%2!=0)
		{

			for(col=1;col<=row;col++)
			{
				if(col%2==0)
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}
			printf("\n");
		}
	}
	getch();
}