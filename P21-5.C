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
		for(col=1;col<=row;col++)
		{
			printf("%4d",k++);
		}
		printf("\n");
	}
	getch();
}