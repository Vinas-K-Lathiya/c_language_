#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int b;
     clrscr();
     printf("a:");
     scanf("%d",&a);
     printf("b:");
     scanf("%d",&b);

     a = a+b;
     b = a-b;
     a = a-b;

     printf("a ; %d  b: %d",a,b);
     getch();
}


/*

 a= 5;
 b = 10;


 a=a+b;
 b=a-b;
 a=a-b;




*/