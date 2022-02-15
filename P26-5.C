#include<stdio.h>
void main()
{
	int num,row=1;
	clrscr();
	printf("\n Enter the range : \n");
	scanf("%d",&num);
	for(row=1;row<=num;row++)
	{
		printf("\n cube of %d is %d \n",row,row*row*row);
	}
	getch();
}