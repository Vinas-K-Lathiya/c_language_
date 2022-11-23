#include<stdio.h>
#include<conio.h>

main()
{
	int x = 10, y = 5, z = 2, a;
	clrscr();
	a= x*x*x + 3*x*x*y + 3 *x*x*z + 6*x*y*z +3*x*z*z + y*y*y +3*y*y*z + 3*y*z*z + z*z*z;
	printf("%d",a);
	getch();
}