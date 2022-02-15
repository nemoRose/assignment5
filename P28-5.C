#include<stdio.h>
#include<conio.h>
void main()
{
	int num,row,col,rng,temp=0,temp2=0;
	clrscr();
	printf("\n Enter the range : \n");
	scanf("%d",&rng);
	for(row=0;row<rng;row++)
	{
		for(col=0;col<=row;col++)
		{
			temp=(temp*10)+1;
		}
		printf("%2d",temp);
		temp2+=temp;
		temp=0;
	}
	printf("\n The sum is %d",temp2);
	getch();
}