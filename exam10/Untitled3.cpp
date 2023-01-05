#include<stdio.h>
#include<string.h>

void len (char a[]){
	int l;
	l=strlen(a);
	printf("lenth is %d",l);
}

main(){
	char a[30];
	gets (a);
	puts (a);
	len(a);
}
