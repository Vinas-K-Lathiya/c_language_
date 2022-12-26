#include<stdio.h>

main(){
	
	int i;
	char a[20];
	
	printf("enter your name  in capital  :");
	scanf("%[^\n]",&a);
	
	if(a[0]>=97 && a[0]<=122){
		a[0]-=32;
	}
	for(i=1;i<=strlen(a);i++){
		if(a[i]>=65 && a[i]<=90 ){
			a[i]+=32;
		}
	}
	printf("%s",a);
}
