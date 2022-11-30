#include<stdio.h>
#include<conio.h>

main()
{
	int a,bill=0,qty;
	tmp:
	clrscr();
	printf("\t\t\tnashila dhaba\n");
	printf("press 1 for bhajiya\n");
	printf("press 2 for patti bhajiya\n");
	printf("press 3 for bateka puri\n");
	printf("press your choice\n");
	scanf("%d",&a);

	switch(a) {
	   case 1 : printf("you ordered bhajiya.\n");
		    printf("press 1 for methina bhajiya price 100\n");
		    printf("press 2 for kumbhaniya bhajiya price 200\n");
		    scanf("%d",&a);
		    printf("enter quantity:-");
		    scanf("%d",&qty);
		    printf("enter 0 for order more\n");
		    printf("enter 1 for bill");
		    scanf("%d",&a);
		    switch(a){
			 case 1 : printf(" methina bhajiya");
				  bill += 100*qty;
				  break;
			 case 2 : printf(" kumbhaniya bhajiya");
				  bill += 200*qty;
				  break;
			 if(a==0){
				goto tmp;
				}
			 else{
				printf("%d",bill);

			 }
		    }
		    break;
	   case 2 : printf("you ordered patti bajiya.") ;
		    break;
	   case 3 : printf("you ordered puri.");
		    break;
	   default : printf("invalid choice.");

	}
	printf("%d",bill);
	getch();

}
