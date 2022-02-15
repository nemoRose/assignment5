##include<stdio.h>
#include<conio.h>
void main()
{
	int i,range;
	float num=1;
	clrscr();
	printf("\n Enter the range : \n");
	scanf("%d",&range);
	for(i=2;i<=range;i++)
	{
		num=+(float)1/i
	}
	printf("%f",num);
	getch();
}