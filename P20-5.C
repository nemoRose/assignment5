#include<stdio.h>
#include<conio.h>
void main()
{
	int row, col, sp;
	char ch=65;
	clrscr();
	for(row=0;row<=5;row++)
	{
		ch = 65;
		for(sp=5;sp>=row;sp--)
		{
			printf("  ");
		}
		for(col=1;col<=row;col++)
		{
			printf("%c ",ch++);
		}
		ch = 65;
		for(col=row-1;col>=1;col--)
		{
			printf("%c ",ch+col-1);
		}
		printf("\n");
	}
	getch();
}