#include<stdio.h>

main(){
	int n,i;
	printf("enter value of n :");
	scanf("%d",&n);
	int *p[n];
	int a[n];
	
	for(i=0;i<n;i++){
		p[i]=&a[i];
		scanf("%d",p[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",*p[i]);
	}
}
