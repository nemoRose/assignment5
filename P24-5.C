#include<stdio.h>
void main()
{
	int num,i,mul=0;
	clrscr();
	printf("\n Enter number : \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		mul=num*i;
		printf("\n %d * %d = %d",num,i,mul);
	}
	getch();
}