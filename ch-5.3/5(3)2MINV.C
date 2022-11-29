#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("a,b,c");
	scanf("%d%d%d",&a,&b,&c);

	(a<b)
		?	(a<c)
				?	printf("a is small")
				:       printf("c is small")
		:       (b<c)
				? 	printf("b is small")
				:	printf("c is small");
	getch();
}
