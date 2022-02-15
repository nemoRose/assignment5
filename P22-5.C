#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,lcm;
	clrscr();
	printf("\n Enter number : \n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		lcm=num1;
	}
	else
	{
		lcm=num2;
	}
	while(1){
		if(lcm%num1==0 && lcm%num2==0)
		{
			printf("\n The LCM of %d and %d is %d",num1,num2,lcm);
			break;
		}
		lcm++;
	}
	getch();
}