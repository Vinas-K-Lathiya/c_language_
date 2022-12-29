#include<stdio.h>

cube(){
	int a;
	
	printf("enter value of a :");
	scanf("%d",&a);
	
	if(a%3==0&&a%5==0){
		printf("yes");
	}
	else{
	printf("no");}
	
}

main(){
	
	cube();
}
