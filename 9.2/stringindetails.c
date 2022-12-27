#include<stdio.h>

main(){
	
	int sc=0,dg=0,sp=0,up=0,lw=0,len=0,i;
	
	char psw[20];
	
	gets(psw);
	
	len=strlen(psw);
	
	for(i=0;i<=len;i++){
		if(psw[i]==' ')
			sp++;
		else if(psw[i]==' ')
			sp++;
		else if(psw[i]>=65 && psw[i]<=90)
			up++;
		else if(psw[i]>=97 && psw[i]<=122)
			lw++;
		else if(psw[i]>=48 && psw[i]<=57)
			dg++;
		else {
			sc++;
		}
	}
	
	if(sp==0 && sc>=1 && up>=1 && lw>=1 && dg>=1 && len>=6)
				printf("valid");
	else{
		printf("invalid");
	}
	
}
