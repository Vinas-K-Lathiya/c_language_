#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,sum=1;

	clrscr();
	printf("enter value of n = ");
	scanf("%d",&n);
	while(i<=n)
	{
	  printf("%d ",i);
	  sum=sum*i;
	  i++;
	}
	printf("\n%d",sum);
	getch();
}