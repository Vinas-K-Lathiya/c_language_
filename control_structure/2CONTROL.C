#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	if (a>0) {
	 printf("positive");
	}
	else if (a==0)
	{
	printf("neutral");
	}
	else {
	printf("nagative");
	}
	getch();
}