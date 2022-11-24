#include<stdio.h>
#include<conio.h>

main()
 {
	int b = 100;
	int hra;
	int da;
	int ta;
	int f;
	clrscr();
	hra = b*10/100;
	da = b*5/100;
	ta = b*8/100;
	f = b+hra+da+ta;
	printf("%d",f);
	getch();
	}