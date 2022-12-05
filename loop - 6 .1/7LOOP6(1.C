#include<stdio.h>
#include<conio.h>

main()
{
	int i=2000,n=3000;

	clrscr();
	printf("enter value of n = ");
	while(i<=n)
	{
	  if(i%4==0)
	  printf("%d ",i);
	  i++;
	}

	getch();
}