#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	clrscr();
	printf("a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	(a>b)
		?	(a>c)
				?   (a>d)
					       ?  (a>e)
							? printf("a is big")
							: printf("e is big")
					       :  (d>e)
							? printf("d is big")
							: printf("e is big")
				:   (c>d)
						?  (c>e)
							? printf("c is big")
							: printf("e is big")
						:  (d>e)
							? printf("d is big")
							: printf("e is big")
		:	(b>c)
				?   (b>d)
						? (b>e)
						       ? printf("b is big")
						       : printf("e is big")
						: (d>e)
						       ? printf("d is big")
						       : printf("e is big")
				:   (c>d)
						? (c>e)
						       ? printf("c is big")
						       : printf("e is big")
						: (d>e)
						       ? printf("d is big")
						       : printf("e is big");
	getch();
}