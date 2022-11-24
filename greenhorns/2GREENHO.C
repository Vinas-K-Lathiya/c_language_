#include<stdio.h>
#include<conio.h>

main()
{
	int a=5;
	int b = 10;
	clrscr();
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\n%d",a,b);
	getch();
}