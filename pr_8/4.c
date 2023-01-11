#include<stdio.h>

main(){
	char str[20];int i;int *p,k=0;gets(str);for(i=0;i<strlen(str);i++){k++;}p=&k;printf("%d",*p);
}
