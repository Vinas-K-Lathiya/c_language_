#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();
	printf("a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	(a>b)
		?	(a>c)
				?       (a>d)
						? printf("a is big")
						: printf("d is big")
				:   	(c>d)
						? printf("c is big")
						: printf("d is big")
		:	(b>c)
				?
					(b>d)
						? printf("b is big")
						: printf("d is big")
				:
					(c>d)
						? printf("c is big")
					: printf("d is big");
	getch();
}