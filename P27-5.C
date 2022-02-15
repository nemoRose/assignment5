	#include<stdio.h>
#include<conio.h>
void main()
{
	int i,ft,nt,temp,com,temp2=0;
	clrscr();
	printf("\nfirst number of the G.P : \n");
	scanf("%d",&ft);
	printf("\n Number of terms in G.P : \n");
	scanf("%d",&nt);
	printf("Common ratio of G.P : \n");
	scanf("%d",&com);
	printf("%f",(float)ft);
	temp2 +=(float)ft;
	for(i=1;i<nt;i++)
	{
		temp=ft*2;
		printf("%f",(float)temp);
		temp2+=(float)temp;
		ft=temp;
	}
	printf("\n Sum of G.P series : %f",(float)temp2);
	getch();
}