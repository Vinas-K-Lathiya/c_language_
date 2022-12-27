#include<stdio.h>

main(){
	
	int sc=0,dg=0,sp=0,up=0,lw=0,len=0,i,ath=0,dot=0,lenth=0,digit=0,lawer=0,upper=0;
	char email[200];
	char psw[20];
	
	
	
	gets(email);
	gets(psw);
	
	lenth=strlen(email);
	
	for(i=0;i<=lenth;i++){
		if(email[i]==' ')
			sp++;
		else if(email[i]>=65 && email[i]<=90)
			upper++;
		else if(email[i]>=97 && email[i]<=122)
			lawer++;
		else if(email[i]>=48 && email[i]<=57)
			digit++;
		else if(email[i]=='@')
			ath++;
		else if(email[i]=='.')
			dot++;
	}
	
	if(sp==0  && upper==0 && lawer>=1 && digit>=1 && lenth>=10 && dot==1 && ath==1)
				printf("valid\n");
	else{
		printf("invalid\n");
	}
	
	
	
	len=strlen(psw);
	
	for(i=0;i<=len;i++){
		if(psw[i]==' ')
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
