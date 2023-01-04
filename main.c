#include<stdio.h>

fact(int a){
	if(a<=1)
	{
		return 1;
	}
	else{
		return a*fact(a-1);
	}
}

main(){
	int n;
	
	printf("enter value of : n  ");
	scanf("%d",&n);
	int a[n],b[n],i;
	
	for(i=0;i<n;i++){
		printf("enter value a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=fact(a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
}


