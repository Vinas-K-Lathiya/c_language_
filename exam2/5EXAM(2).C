#include<stdio.h>
#include<conio.h>\

main()
{
	float f,u,r;
	clrscr();
	printf("enter unit :");
	scanf("%f",&u);

	if(u<50)
	{
	 r=u*0.5;
	 printf("%f",r);
	}
	else if(51<150)
	{
		r=((u-50)*0.75)+25);
		printf("%f",r);
	}
	else if(151<250)
	{
	       r=((u-150)*1.20)+100;
	       printf("%f",r);
	}
	else if (250<u)
	{
		r=((u-250)*1.50)+220;
		printf("%f",r);
	}
	else{
		printf("invalid");
	}
	f = r+(r*0.2);
	printf("%f",f);
	getch();
}