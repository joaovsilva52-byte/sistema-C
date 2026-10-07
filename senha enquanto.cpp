#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int senha;
	printf("DIGITE UMA SENHA NUMERICA: ");
	scanf("%d",&senha);
	 
	 while(senha!= 1234){
	 	 printf(" senha incorreta.\n");
	  printf("digite senha novamente: ");
	  scanf("%d",&senha);
	  
	 }
	 printf("ACESSO PERMITIDO \n");
	   return 0;
	   
	   }
	  
	
