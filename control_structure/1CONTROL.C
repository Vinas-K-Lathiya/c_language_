#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	if (a>b) {
	 printf("a is big");
	}
	else {
	printf("b is big");
	}
	getch();
}