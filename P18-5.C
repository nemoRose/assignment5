#include<stdio.h>
#include<conio.h>
void main()
{
	int row,col,n;
	clrscr();
	printf("\n Enter the number of rows you want : ");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",row);
		}
		printf("\n");
	}
	getch();
}