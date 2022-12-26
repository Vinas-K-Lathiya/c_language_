#include<stdio.h>

main(){
	
	int i;
	char a[20];
	
	printf("enter your name  in capital  :");
	scanf("%[^\n]",&a);
	
	for(i=0;i<=strlen(a);i++){
		if(a[i]>=97 && a[i]<=122){
		a[i]-=32;
 	}
	else if(a[i]>=65 && a[i]<=90){
		a[i]+=32;
	}
	}
	
	printf("%s",a);
}
