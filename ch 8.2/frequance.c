#include<stdio.h>

main(){
	int i,j,n=6,c;
	int a[6]={1,2,1,3,2,2};
	int f[6]={0,0,0,0,0,0};
	
	for(i=0;i<n;i++){
		c=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				c++;
			f[j]=-1;
		}
			if(f[i]==0){
				f[i]=c;
			}
		}
	}
	for(i=0;i<n;i++){
		if(f[i]>0){
			printf("%d occurec %d times",a[i],f[i]);
				printf("\n");
		}
	}
	
}
