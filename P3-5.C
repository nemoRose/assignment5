#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],j,n,i,odd[10];
	clrscr();
	printf("\n Enter the number of elements you want in an array : \n");
	scanf("%d",&n);
	printf("\n Enter the values : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0,j=0;i<n;i++,j++){
		if(arr[i]%2!=0)
		{
			odd[j]=arr[i];
			printf("%d ",odd[j]);
		}

	}
	getch();
}
