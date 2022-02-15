#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,ans=0,row=1;
	clrscr();
	printf("\n Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	for(;row<=num1 && row<=num2;row++)
	{
		if(num1%row == 0 && num2%row == 0)
		{
			ans=row;
		}
	}
	printf("hcm is %d",ans);
	getch();
}