#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int num;
	clrscr();
	for(;;)
	{
		printf("\n enter the number : ");
		scanf("%d",&num);
		if(num>0)
		{
			printf("\n The number is positive.");
		}
		else if(num==0)
		{
			printf("\n The number is equal to 0");
		}
		else
		{
			printf("\n The number is negative.")
		}
		if(ch = getch() == 'y')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	getch();
}