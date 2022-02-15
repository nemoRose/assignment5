#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0,rem,temp;
	clrscr();
	printf("\n Enter the number : \n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(sum==temp)
	{
		printf("\n The number is Armstrong.");
	}
	else
	{
		printf("\n The number is not Armstrong.");
	}
	getch();
}