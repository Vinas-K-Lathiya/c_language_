#include<stdio.h>
#include<conio.h>

main()
{       int x = 2, y = 3;
	int z;
	clrscr();
	z = x*x*x - 3*x*x*y + 3*x*y*y - y*y*y;
	printf("%d",z);
	getch();

}