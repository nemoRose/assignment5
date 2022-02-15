#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,len;
	char nm[20];
	clrscr();
	printf("\nEnter the string : ");
	gets(nm);
	len=strlen(nm);
	for(i=0;i<=len;i++)
	{
		if(nm[i]>=65 && nm[i]<=90)
		{
			printf("\n%c : Uppercase",nm[i]);
		}
		if(nm[i]>=97 && nm[i]<=122)
		{
			printf("\n%c : Lowercase",nm[i]);
		}
	}
	getch();
}