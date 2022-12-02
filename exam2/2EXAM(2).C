#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();
	printf("enter value of a :");
	scanf("%d",&a);
	(a%2==0)
	     ? printf("even")
	     : printf("odd");
	     getch();
}