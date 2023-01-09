#include<stdio.h>

main(){
	int n,i,j;
	
	printf("enter value of n");
	scanf("%d",&n);
	
	int a[n];
	int *p;
	  p=&a;
	for(i=0;i<n;i++){
		
		printf("enter value of array");
		scanf("%d",(p+i));
	} 
	
	for(i=0;i<n;i++){
		for(j=1;j<p;j++){
			if(j*j==*(p+i)){
				printf("%d\n",j);
			}
		}
	}
}
