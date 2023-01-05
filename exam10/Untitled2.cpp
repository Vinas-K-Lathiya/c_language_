#include<stdio.h>


int array(int a[],int n){
		int sum=0,i;
		for(i=0;i<n;i++){
			sum +=a[i];
		}
		return sum;
	}
	
main(){
	int n;
	printf("enter value :  ");
	scanf("%d",&n);
	int s,i;
	int a[n];
	for(i=0;i<n;i++){
		printf("entern value :   ");
		scanf("%d",&a[i]);
	}
	s=array(a,n);
	printf("%d",s);
}
