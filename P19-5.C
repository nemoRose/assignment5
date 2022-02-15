#include<stdio.h>
#include<conio.h>
void main()
{
	int row,col,sp;
	clrscr();
	for(row=1;row<=5;row++)
	{
		for(sp=0;sp<5-row;sp++)
		{
			printf("  ");
		}
		for(col=0;col<row*2-1;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(row=1;row<=4;row++)
	{
		for(sp=0;sp<row;sp++)
		{
			printf("  ");
		}
		for(col=1;col<=(5-row)*2-1;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}